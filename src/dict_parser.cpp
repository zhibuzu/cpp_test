/***************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * 
 * Description: 完成一个通用的词典解析器
 *      Author: Hulifa(hulifa@baidu.com)
 *    Revision: None
 * 
 ****************************************************************/

/**
 * @file    parse.cpp
 * @brief   类边界：只提供解析功能但不存储解析状态
 *          初始化词表文件，
 *          提供词表格式设置接口，
 *          提供用户自定义类型解析器注册，
 *          提供line by line解析
 *          
 * @author  Hulifa (hulifa@baidu.com)
 * @version 1.0.0
 * @date    2018/05/20
 */

#include "dict_parser.h"

type_parser_map = {
    {"int", int_parser},
    {"float", float_parser},
    {"string", string_parser},
    {"intArray", intArray_parser}
};

namespace good_coder {

int DictParser::init() {
    // 打开词表文件流
    _dict_fd = fopen(_dict_file_name, "r");
    if (NULL == _dict_fd) {
        com_writelog(COMLOG_FATAL, "[ DictParser::init ] open dict file[%s] failed", _dict_file_name);
        return ERROR_FAIL;
    }

    // 词表格式字符串表示转为向量容器表示
    split_str(_s_format, _sep, _v_format);
    return ERROR_SUCC;
}

int DictParser::register_type_parser(std::string type_name, p_type_parser parser) {
    if (0 == strlen(type_name)) {
        com_writelog(COMLOG_FATAL, "[ DictParser::register_type_parser ] type name is empty");
        return ERROR_FAIL;
    }

    type_parser_map.insert(std::make_pair(type_name, parser));
    return ERROR_SUCC;
}

DICT_PARSE_CODE DictParser::parse_line_by_line(int read_columns, ...) {
    // 行号递增
    ++_line_no;

    // 读取行
    int ret = read_line();
    if (0 != ret) {
        return ret;
    }

    if (read_columns > _v_line_buff.size()) {
        comlog_writelog(COMLOG_WARNING, "[ DictParser::parse_line_by_line ] param read_columns[%d] exceeds actual", read_columns);
        return PARAM_ERROR;
    }

    // 解析每列数据
    va_list vl;
    va_start(vl, read_columns);
    int col_no = 0; // 从0开始计数
    for ( ; col_no < read_columns; ++col_no) {
        void * arg = va_arg(vl, void *);
        std::string type_name = _v_format[col_no];
        p_type_parser parser = type_parser_map[type_name];
        std::string column_buff = _v_line_buff[col_no];

        TYPE_PARSE_CODE ret =  parser(column_buff, arg);
        // 有一列解析错误，则跳过整行
        if (PARSE_SUCC != ret) {
            comlog_writelog(COMLOG_WARNING, "[ DictParser::parse_line_by_line ] parse column[line_no=%d, column_no=%d] failed", _line_no, col_no + 1);
            return PARSE_FAIL;
        }
    }

    comlog_writelog(COMLOG_DEBUG, "[ DictParser::parse_line_by_line ] parse column[line_no=%d, column_no=%d] succecss", _line_no, col_no + 1);
    return PARSE_SUCC;
}

int DictParser::read_line() {
    if (foef(_fd)) {
        com_writelog(COMLOG_WARNING, "[ DictParser::read_line ] dict file end");
        return FILE_END;
    }

    // 按行读取词表文件流
    if (NULL == fgets(_line_buff, MAX_LINE_LEN, _fd)) {
        com_writelog(COMLOG_WARNING, "[ DictParser::read_line ] read line[line_no:%d] failed", _line_no);
        return READ_LINE_FAIL;
    }
    // TODO: 按最大行长度读取时，是否真的读取了一整行
    std::string s_line_buff = static_cast<std::string>(_line_buff);

    // 按分隔符分隔每列
    _v_line_buff.clear();
    int ret = split_str(s_line_buff, _sep, _v_line_buff);
    
    // 词表格式检查
    if (_v_format.size() != _v_line_buff.size()) {
        com_writelog(COMLOG_WARNING, "[ DictParser::read_line ] line[line_no:%d] format error", _line_no);
        return LINE_FORMAT_ERROR;
    }

    return 0;
}

}; // namespace: good_coder
