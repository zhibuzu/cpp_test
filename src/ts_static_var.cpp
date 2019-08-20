#include <iostream>
#include <fstream>
#include <ctime>
#include <unistd.h>

int compare_time() {
    static time_t last_time = time(NULL);
    // last_time = time(NULL);
    time_t now = time(NULL);
    fprintf(stdout, "last time = %lu, now = %lu\n", last_time, now);
    if (last_time < now) {
        return 1;
    }
    return 0;
}

void add() {
    static int count = 0;
    count = count + 1;
    fprintf(stdout, "cout = %d\n", count);
}

int main(void) {
    std::cout << compare_time() << std::endl;
    sleep(2);
    std::cout << compare_time() << std::endl;

    add();
    add();
}