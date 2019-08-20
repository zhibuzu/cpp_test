#include <iostream>

int main(int argc, char * argv[]) {
    for (int i = 0; i < argc; ++i) {
        fprintf(stdout, "arg%d: %s\n", i, argv[i]);
    }

    if (true && (false || true)) {
        fprintf(stdout, "is true");
    }

    return 0;
}