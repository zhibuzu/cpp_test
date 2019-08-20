#include <iostream>
#include <string>

int main()
{
    std::string str_arr[] = {"HE", "LLO"};
    int len = str_arr[0].length();
    printf("%d\n", len);
    
    char * pstr = new char[len + 1];
    snprintf(pstr, len + 1, "%s", str_arr[0].c_str());
    pstr[len + 1] = '\0';
    printf("%s\n", pstr);


    return 0;
}
