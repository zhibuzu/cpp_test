#include <iostream>

using namespace std;

int incream(void *pi) {
    int *pint = static_cast<int *>(pi);
    ++(*pint);
    return 0;
}

int main() {
    int num = 1;
    void *pnum = &num;
    // cout << *pnum << endl;

    // int ret = incream(static_cast<int*>(pnum));
    int ret = incream(pnum);
    int  *pres = static_cast<int *>(pnum);
    cout << *pres << endl;

    unsigned int t = 9;
    int * threadid = (int *)t;
    // fprintf(stdout, "threadid: %lu\n", threadid);
    // fprintf(stdout, "threadid: %u\n", *threadid);
    std::cout << threadid << std::endl;
}