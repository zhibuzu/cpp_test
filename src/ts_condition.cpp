/************************
 *
 * ts_condition.cpp
 *
 * 条件语句书写格式
 * **********************/
#include <iostream>

int main() {
    int score = 90;

    switch (score) {
    case 10:
    case 20: {
        int a = 1;
    }
    }

    while (++score < 10; ++score < 10; ++score < 10; ++score < 10; ++score < 10; ++score < 10;
            ++score < 10; ++score < 10; ++score < 10; ++score < 10; ++score < 10; ++score < 10; ++score < 10;
            ++score < 10; ++score < 10; ++score < 10;) {
        // pass
    }

    do {
        // pass
    } while (++score < 10);
}