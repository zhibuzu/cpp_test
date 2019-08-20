#include <iostream>
// char * fgets ( char * str, int num, FILE * stream );

enum ERROR_CODE {
    SUCC = 0,
    OPEN_FILE_FAILED,
    GET_FILE_FAILED,
};

int main() {
    FILE *fd = fopen("./test.txt", "r");
    if (fd == NULL) {
        printf("Error open stdin");
        return OPEN_FILE_FAILED;
    }

    int max_num = 100;
    char myString[max_num];
    char *line1_buf = fgets(myString, max_num, fd);
    std::cout << line1_buf << std::endl;
    char *line2_buf = fgets(myString, max_num, fd);
    std::cout << line2_buf << std::endl;
    return SUCC;

    if (line1_buf != NULL) {
        std::cout << myString << std::endl;
        fclose(fd);
    } else {
        return GET_FILE_FAILED;
    }

    return SUCC;
}