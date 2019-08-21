#include <iostream>
#include <cstdio>

int main(void) {
    char *p1 = NULL;
    char *p2 = nullptr;

    printf("p1 address=[%p], p1 value=[%p]\n", &p1, p1);
    printf("p2 address=[%p], p2 value=[%p]\n", &p2, p2);

    char p3[10] = {'f', 'g', 'h', 'i', 'e', 'a', 'b', 'c', 'd', '\0'};
    p1 = p3;
    printf("p1 address=[%p], p1 value=[%p], p1 point to=[%c]\n", &p1, p1, *p1);
    printf("p3 address=[%p], &p3+1=[%p], p3 value=[%p], p3+1=[%p], p3 point to=[%c]\n", &p3, (&p3 + 1), p3, p3+1, *p3);
    printf("sizeof(p3)=[%lu], sizeof(&p3)=[%lu], sizeof(*p3)=[%lu]\n", sizeof(p3), sizeof(&p3), sizeof(*p3));
    printf("sizeof(p1)=[%lu], sizeof(&p1)=[%lu], sizeof(*p1)=[%lu]\n", sizeof(p1), sizeof(&p1), sizeof(*p1));

    char (*p4)[10] = &p3;
    printf("p4 address=[%p], sizeof(p4)=[%lu], sizeof(*p4)=[%lu], *p4=[%s]\n", p4, sizeof(p4), sizeof(*p4), *p4);
}
