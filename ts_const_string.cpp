#include <cstdio>

int main() {
    char URL[100] = "http://www.baidu.com";
    const char *c_url = URL;
    char *p_url = URL;
    fprintf(stdout, "%s\n", c_url);
    fprintf(stdout, "%s\n", p_url);

    *(p_url + 4) = 's';
    fprintf(stdout, "%s\n", c_url);
    fprintf(stdout, "%s\n", p_url);
}