/**
 * 函数指针
 */

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef int (*func)(int, void *);

struct type_parser_t {
    const char* name;
    func parser;
};

int increase(int n, void *res) {
    *(int *)res = ++n;
    return (*(int *)res);
}

int decrease(int n, void *res) {
    *(int *)res = --n;
    return *(int *)res;
}

int square(int n, void *res) {
    *(int *)res = n * n;
    return *(int *)res;
}

type_parser_t type_parser_arr[] = {
    {"increase", increase},
    {"decrease", decrease},
    {"square", square}
};

std::map<string, func> type_parser_map;

int split_str(string str, const char* delimiters, vector<string> &vec) {
    int split_s = 0;
    int split_e = 0;
    int delimiters_len = strlen(delimiters);

    while (string::npos != split_e) {
        split_e = str.find(delimiters, split_s);
        
        if (string::npos == split_e) {
            (vec).push_back(str.substr(split_s));
            break;
        }
        (vec).push_back(str.substr(split_s, split_e - split_s));
        split_s = split_e + delimiters_len;
    }

    return 0;
}


int cal_line_data(vector<string> v_line, vector<string> v_format, ...) {
    size_t num = v_format.size();

    // 可变长参数
    va_list vl;
    va_start(vl, v_format);

    int i = 0;
    for (; i < num; ++i) {
        void * arg_res = va_arg(vl, void *);
        string s_format = v_format[i];
        int s_line = stoi(v_line[i]);
        func fn = type_parser_map[s_format];
        int res = (*fn)(s_line, arg_res);
        // cout << res << endl;
        (arg_res) = res;
    }

    return 0;
}

int main() {
    // func fn1 = increase;
    // int res = (*fn1)(1);
    // cout << res << endl;

    // func fn2 = decrease;
    // cout << (*fn2)(1) << endl;

    // func fn3 = square;
    // cout << (*fn3)(3) << endl;


    // int arg = 2;
    // type_parser_t *p = type_parser_arr;
    // while (p->name && p->parser) {
    //     std::cout << "calculate: " << p->name << std::endl;
    //     std::cout << "res: " << (*p->parser)(arg) << std::endl;
 
    //     ++p;
    // }

    type_parser_map.insert(std::make_pair("increase", increase));
    type_parser_map.insert(std::make_pair("decrease", decrease));
    type_parser_map.insert(std::make_pair("square", square));
    // // 下标操作
    // std::cout << (*type_parser_map["increase"])(arg) << std::endl;
    // // 迭代器
    // std::map<const char*, func>::iterator map_it = type_parser_map.begin();
    // while (map_it != type_parser_map.end()) {
    //     std::cout << "Cal: " << map_it->first << std::endl;
    //     std::cout << "Res: " << (*map_it->second)(arg) << std::endl;
    //     ++map_it;
    // }

    const char* sep = "\t";
    const char *line1 = "1\t2\t3";
    const char *format = "increase\tdecrease\tsquare";

    string s_line1 = static_cast<string>(line1);
    string s_format = static_cast<string>(format);
    
    // cout << s_line1 << endl;

    vector<string> v_line1;
    vector<string> v_format;
    if (0 != split_str(s_line1, sep, v_line1)) {
        printf("ERROR: split line1 failed!");
    }

    if (0 != split_str(s_format, sep, v_format)) {
        printf("ERROR: split format failed!");
    }

    // cout << v_line1.size() << endl;
    // cout << v_format.size() << endl;
    if ((v_line1).size() != (v_format).size()) {
        printf("ERROR: line1 not match format");
    }
    
    // 下标
    size_t i = 0;
    string type_name;
    func fn;
    int arg;
    for (; i < v_format.size(); ++i) {
        type_name = v_format[i];
        fn = type_parser_map[type_name];
        arg = stoi(v_line1[i]);
        int res;
        int *p_res = &res;
        cout << (*fn)(arg, p_res) << endl;
    }

    // 可变长参数
    int i_res, d_res, s_res;
    int ret = cal_line_data(v_line1, v_format, &i_res, &d_res, &s_res);
    cout << "i_res: " << i_res << endl;
    cout << "d_res: " << d_res << endl;
    cout << "s_res: " << s_res << endl;
}