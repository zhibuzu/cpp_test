#include <stdio.h>
void declare()
{
    int i;
    int a[100];
    for (i = 0;i < 100; i++)
    {
        a[i] = i;
    }
}
void print()
{
    int i;
    int a[100];
    for (i = 0;i < 100; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    declare();
    print();
}