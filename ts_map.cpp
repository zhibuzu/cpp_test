#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// #define REG_PARSE_CLASS(ClassName) do \
// {\

// } while (0)

// 解析出来的行数据
struct RowData {
    int col1;
};

// class ParseCommon
class ParseCommon {
public:
    ParseCommon() {

    };
    ~ParseCommon() {

    };
public:
    virtual string parse(const string &s, string &res);

    string get(string &res) {
        res = value;

        return "0";
    }
private: 
    string value;
};

string ParseCommon::parse(const string &s, string &res) {
    value = s;
    res = value;
    return "0";
};

// class ParseInt
class ParseInt : public ParseCommon {
public:
    typedef int ptype;
    ParseInt() {
        value = 0;
    };
    ~ParseInt() {

    };
public:
    int parse(const string &s, int &res) {
        value = stoi(s);
        res = value;

        return 0;
    }

    int get(int &res) {
        res = value;

        return 0;
    }
private: 
    int value;
};

enum ParseType {
    UNKNOWN = -1,
    PARSE_INT = 0,
    PARSE_FLOAT,

    COUNT_OF_PARSE_TYPE
};

const char* ParseTypeName[] = {
    "int",
    "float"
};

ParseType type_name_to_enum(const char* name);

map<string, ParseCommon* > parse_class_map;
vector<ParseCommon*> parse_class_vec; 


int main() {
    // map<string, size_t> word_count;
    // string word;
    // while (cin >> word) {
    //     ++word_count[word];
    // }

    // for (auto &w : word_count) {
    //     cout << w.first << " 出现了 " << w.second
    //         << "次" << endl; 
    // }
    
    
    
    
    ParseCommon *pi = new ParseInt();
    parse_class_map.insert({"int", pi});
    parse_class_vec.push_back(pi);
    int res;
    // int ret = dynamic_cast<ParseInt*>(parse_class_map["int"])->parse("1010000", res);
    // int ret = parse_class_map["int"]->parse("1010000", res);
    // int ret = (parse_class_vec[0])->parse("1010000", res);
    int ret = (*pi).parse("1010000", res);
    cout << "res: " << res << endl;
    cout << "type of res: " << typeid(res).name() << endl;
    cout << "type of res: " << typeid(pi).name() << endl;
    

    // ParseInt pii = new (types_map["int"]);
    // int num = pii.parse("10100001");
    // cout << num << endl;
}