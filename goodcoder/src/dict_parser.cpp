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
 * @date    2018/05/18
 */

#include <dict_parser.h>
#include <stdarg.h>
#include "buildin_parser.h"

