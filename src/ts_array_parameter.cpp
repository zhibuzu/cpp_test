#include <iostream>
#include <cstdio>
#include <cstring>

void map(int input[], int len, int output[]) {
    printf("input point address=[%p]\n", input);
    printf("input point address[1]=[%p]\n", &input[1]);
    for (int i = 0; i < len; ++i) {
        output[i] = input[i] * input[i];
    }
}

int main(void) {
    int arr[5] = {1,2,3,4,5};
    int map_arr[5] = {0};
    memset(map_arr, 0, 5 * sizeof(int));
    map(arr, 5, map_arr);
    printf("arr address=[%p]\n", arr);
    printf("arr address[1]=[%p]\n", &arr[1]);
    printf("arr address + 1=[%p]\n", arr + 1);

    char char_arr[5] = "abcd";
    printf("char arr address=[%p]\n", char_arr);
    printf("char arr address[1]=[%p]\n", &char_arr[1]);
    printf("char arr address + 1=[%p]\n", char_arr + 1);
    
    int *p_age = new int(27);
    printf("p_age address=[%p]\n", p_age);
    printf("p_age pointer to=[%d]\n", *p_age);
    printf("p_age arr[0]=[%d]\n", p_age[0]);

    for (int i = 0; i < 5; ++i) {
        printf("map output[%d]=[%d]\n", i, map_arr[i]);
    }
}
