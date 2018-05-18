/**********
 * 
 * int_double.cpp
 *
 * **********/
#include <iostream>

int main()
{
    int i = 10;
    double f = 10.89;

    f = i;
    printf("%.2f\n", f);

    i = f;
    printf("%d\n", i);

    return 0;
}
