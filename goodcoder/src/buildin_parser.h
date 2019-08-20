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
 * @file    buildin_parser.h
 * @brief   内置的类型解析函数
 *          
 * @author  Hulifa (hulifa@baidu.com)
 * @version 1.0.0
 * @date    2018/05/21
 */

#ifndef GOOD_CODER_BUILDIN_PARSER_H
#define GOOD_CODER_BUILDIN_PARSER_H

#include <string>
#include "dict_parser.h"

TYPE_PARSE_CODE int_parser(std::string str, void *res) {
    int *pInt = (int *)res;
    *pInt = stoi(str);
    return PARSE_SUCC;
}

TYPE_PARSE_CODE float_parser(std::string str, void *res) {
    float *pFloat = (float *)res;
    *pFloat = stof(str);
    return PARSE_SUCC;
}

TYPE_PARSE_CODE float_string(std::string str, void *res) {
    char *pString = (char *)res;
    pString = (char *)str.c_str();
    return PARSE_SUCC;
}

TYPE_PARSE_CODE intArray_parser(std::string str, void *res) {
    // TODO
}

#endif