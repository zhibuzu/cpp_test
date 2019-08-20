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
 * @file    main.cpp
 * @brief   
 * @author  Hulifa (hulifa@baidu.com)
 * @version 1.0.0
 * @date    2018/05/11
 */

#include <iostream>
#include "dict_parser.h"

int main(int argc, char* argv[]) {
    // 开启comlog
    if (0 != com_loadlog("../conf", "comlog.conf")) {
        fprintf(stderr, "load comlog error\n");
        return -1;
    }

    // format: "string\tint\tfloat"
    DictParser dict_parser("../data/test_data.dict", "string\tint\tfloat");

    // initialization
    int ret = dict_parser.init();
    if (ERROR_SUCC != ret) {
        fprintf("DictParser initialize failed\n");
        return -1;
    }

    int read_columns = 3;
    char *url;
    int display;
    float score;
    ret = dict_parser.parse_line_by_line(read_columns, url, &display, &score);
    while (FILE_END != ret) {
        if (PARSE_SUCC == ret) {
            std::cout << url << "\t" << display << "\t" << score << std::endl;
        }
        ret = dict_parser.parse_line_by_line(read_columns, url, &display, &score);
    }
    std::cout << "=======parse end==========" << std::endl;

    return 0;
}