#include <string>
#include <unistd.h>
#include <fstream>

int main() {
    char line_buf[1024] = {0};
    fprintf(stdout, "size of line_buf: %lu\n", sizeof(line_buf));
    while(fgets(line_buf, sizeof(line_buf), stdin)) {
        fprintf(stdout, "read line: %s\n", line_buf);
        fprintf(stdout, "read line size: %lu\n", sizeof(line_buf));
        fprintf(stdout, "read line len: %lu\n", strlen(line_buf));
    }
}