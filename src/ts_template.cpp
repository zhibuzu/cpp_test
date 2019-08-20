#include <iostream>
#include <string>
#include <vector>
#include <map>
// #include <typeinfo.h>

// 字符串按分隔符切分存放入向量容器中
int split_str(std::string str, const char* sep, std::vector<std::string> &vec) {
    size_t split_s = 0;
    size_t split_e = 0;
    size_t sep_len = std::strlen(sep);

    while (std::string::npos != split_e) {
        split_e = str.find(sep, split_s);

        if (std::string::npos == split_e) {
            (vec).push_back(str.substr(split_s));
            break;
        }
        (vec).push_back(str.substr(split_s, split_e - split_s));
        split_s = split_e + sep_len;
    }

    return 0;
}

typedef int (*p_type_parser)(std::string, void *);



int int_parser(std::string str, void *res) {
    int *pInt = (int *)res;
    *pInt = stoi(str);
    return 0;
}

// parse array of type T
template <class T, p_type_parser parserT>
int array_parser(std::string str, void * res) {
    std::vector<T> * pRes = (std::vector<T> *)res;
    
    std::vector<std::string> items_vec;
    std::vector<std::string> pairs;

    int ret = split_str(str, ":", pairs);
    int num = stoi(pairs[0]);
    std::string items_str = pairs[1];
    // fprintf(stdout, "%s\n", num.c_str());
    // fprintf(stdout, "%s\n", items_str.c_str());


    // split str by ','
    ret = split_str(items_str, ",", items_vec);
    
    // size_t len = items_vec.size();
    // fprintf(stdout, "type of T: %s\n", typeid(T).name());
    // fprintf(stdout, "type of char *: %s\n", typeid(char *).name());
    int i = 0;
    for (; i < num; ++i) {
        T itemRes;
        ret = parserT(items_vec[i], &itemRes);
        pRes->push_back(itemRes);
    }

    return 0;
}

// 类型parser函数map : <类型名称, 类型parser函数指针>
std::map<std::string, p_type_parser> type_parser_map = {
    {"int", int_parser}
};


int main(void) {
    // fprintf(stdout, "type of int: %s\n", typeid(char *).name());
    // return 0;

    // std::string format = "int_array";

    // type_parser_map.insert(std::make_pair("int_array", array_parser <int, int_parser>));
    // type_parser_map.insert(std::make_pair("int_array", int_parser));

    // std::vector<int> res_vec;
    // int ret = type_parser_map["int_array"]("2:1,2,3", &res_vec);
    // fprintf(stdout, "ret: %d\n", ret);
    // for(int i = 0; i < res_vec.size(); ++i) {
    //     fprintf(stdout, "item_%d: %d\n", i, (res_vec[i]));
    // }
    std::string str = "display:100,click:50";
    std::map<std::string, int> dc_map;
    dc_map.clear();

    std::vector<std::string> items;
    split_str(str, ",", items);
    for (size_t i = 0; i < items.size(); ++i) {
        fprintf(stdout, "item_%lu: %s\n", i, items[i].c_str());
        std::vector<std::string> pairs;
        split_str(items[i], ":", pairs);
        fprintf(stdout, "pair[0]: %s\n", pairs[0].c_str());
        fprintf(stdout, "pair[1]: %s\n", pairs[1].c_str());
        dc_map.insert(std::make_pair(pairs[0], stoi(pairs[1])));
    }

    std::map<std::string, int>::iterator it = dc_map.begin();
    fprintf(stdout, "first: %s\n", (it->first).c_str());


    

    return 0;
}