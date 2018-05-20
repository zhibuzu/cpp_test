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
 * @file    parse.h
 * @brief   类边界：只提供解析功能但不存储解析状态
 *          初始化词表文件，
 *          提供词表格式设置接口，
 *          提供用户自定义类型解析器注册，
 *          提供line by line解析
 *          
 * @author  Hulifa (hulifa@baidu.com)
 * @version 1.0.0
 * @date    2018/05/18
 */

#ifndef GOOD_CODER_PARSER_H
#define GOOD_CODER_PARSER_H

#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include "com_log.h"

// 类型parser函数返回结果码定义
enum TYPE_PARSE_CODE {
    PARAM_ERROR = -1,
    PARSE_SUCC = 0,
    PARSE_FAIL
};

// 词表解析返回结果码定义
enum DICT_PARSE_CODE {
    FORMAT_ERR = -1,
    PARSE_SUCC = 0,
    PARSE_FAIL
};

// 定义类型parser函数指针
typedef TYPE_PARSE_CODE (*p_type_parser)(std::string, void *);

// 类型parser函数map : <类型名称, 类型parser函数指针>
std::map<std::string, p_type_parser> type_parser_map;

namespace good_coder {
class DictParser {
public:
    DictParser(const char* dict_file_name):
        _dict_file_name(dict_file_name),
        _dict_fd(NULL)
    {
         
    };
    ~DictParser() {

    };
public:
    /**
     * @brief 初始化工作
     * 
     * @return 0: success, 1: fail
     */
    int init();

    /**
     * @brief 定制词表结构，指明每列的类型
     * 
     * @param format: 词表每列类型，如"int\tstring\t\float"
     * 
     * @return 0: success, 1: fail
     */
    int set_format(std::string format);

    /**
     * @brief 定制词表结构，指明每列的类型，并指明列间分隔符
     * 
     * @param format: 词表每列类型，如："int\tstring\t\float"
     *           sep: 词表列间分隔符，如："\t"
     * 
     * @return 0: success, 1: fail
     */
    int set_format(std::string format, std::string sep);

    /**
     * @brief 注册用户自定义的类型parse函数
     * 
     * @param type_name: 类型名称
     *           parser: 类型parser函数指针
     * 
     * @return 0: success, 1: fail
     */
    int register_type_parser(std::string type_name, p_type_parser parser);

    /**
     * @brief 按line by line方式解析词表文件
     * 
     * @return DICT_PARSE_CODE 
     */
    DICT_PARSE_CODE parse_line_by_line();
private:
    const char* _dict_file_name;        // 词表文件名
    FILE *_dict_fd;                     // 词表文件指针

    std::vector<std::string> _v_format; // 词表格式：每列类型描述
    std::string _sep = "\t";            // 词表列间的分隔符

}; // class DictParser
}; // namespace good_coder

#endif