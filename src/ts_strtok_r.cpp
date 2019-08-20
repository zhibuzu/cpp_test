#include <iostream>
// #include <string>

int main() {
    char info[] = "TITL51+PAGE32829+Refer27+SfInfo6656+SfPage50944";
    char * p_tmp = NULL;
    char * p_move = strtok_r(info, "+", &p_tmp);
    fprintf(stdout, "first split str: [%s]\n", p_move);

    char * second_str = strtok_r(NULL, "+", &p_tmp);
    fprintf(stdout, "second split str: [%s]\n", second_str);

    const char * numstr = "101Z";
    fprintf(stdout, "numstr value: %d\n", atoi(numstr));
    fprintf(stdout, "numstr len: %lu\n", strlen(numstr));
    fprintf(stdout, "numstr first char: %c\n", *numstr);
    fprintf(stdout, "numstr second char: %c\n", *(numstr + strlen(numstr) - 1));

    return 0;
}