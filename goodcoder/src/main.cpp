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
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int split_str(string str, const char* delimiters, vector<string> &p_str_arr) {
    int split_s = 0;
    int split_e = 0;
    int delimiters_len = strlen(delimiters);

    while (string::npos != split_e) {
        split_e = str.find(delimiters, split_s);
        
        if (string::npos == split_e) {
            (p_str_arr).push_back(str.substr(split_s));
            break;
        }
        (p_str_arr).push_back(str.substr(split_s, split_e - split_s));
        split_s = split_e + delimiters_len;
    }

    return 0;
}

int main(int argc, char* argv[]) {
    // string line = "hello一";
    // cout << line.size() << endl;
    // cout << isalnum(',') << endl;
    // return 0;
    // while (getline(cin, line)) {
    //     if (line.empty()) {
    //         continue;
    //     }

    //     cout << line << endl;
    // }

    // return 0;

    string str = "STRING\tINT32\tLOAT64";
    // cout << str << endl;
    // cout << str.length() << endl;

    // size_t pos = str.find("\t", 7);
    // if (pos == string::npos) {
    //     cout << "not found SRING" << endl;
    // }
    // cout << pos << endl;

    // string substr = str.substr(7, 12 - 7);
    // cout << substr << endl;

    // const char* delimters = "\ts";
    // int len = strlen(delimters);
    // cout << len << endl;
    // return 0;

    

    vector<string> str_arr;
    // (str_arr).push_back(substr);
    // cout << (str_arr)[0] << endl;

    // vector<string> &ref_str_arr = str_arr;
    // cout << (ref_str_arr)[0] << endl; 
    int ret = split_str(str, "\t", str_arr);
    // cout << ret << endl;

    for (string ss : (str_arr)) {
        cout << ss << endl;
    }


    // while(getline(cin, str)) {
    //     cout << str << endl;
    // }

    // 1. 已知format，每列的格式类型，能直接自动生成最终的数据结构  X
    // 2. 已知format，每列的格式类型，接口调用者自己申明数据结构，处理句柄 V

    return 0;
}