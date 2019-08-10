#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // vector对象初始化方式
    vector<int> vec1;
    vector<int> vec2 = vec1;
    vector<int> vec3(vec1);
    vector<int> vec4(10, 1);
    vector<int> vec5(10);
    // vector<int> vec6 = {1,2,3};
    // vector<int> vec7 = {1, 2, 3};

    // vector<string> vec8 = {"a", "an", "the"};

    vector<string> svec = {"int", "string"};
    
    int data[6] = {3, 2, 1, 3, 4, 7};
    cout << data << endl;
    vector<int> nvec(data, data + 6);
    nvec[1] = 99;
    for (auto n : nvec) {
        cout << n << endl;
    }

    // change nvec value by iterator
    vector<int>::iterator it = nvec.begin();
    for (; it != nvec.end(); ++it) {
        *it = 2 * (*it);
    }
    cout << "======================" << endl;
    for (auto n : nvec) {
        cout << n << endl;
    }

    // int num;
    // vector<int> numvec;
    // while (cin >> num) {
    //     numvec.push_back(num);
    // }

    // for (auto n : numvec) {
    //     cout << n << endl;
    // }
}