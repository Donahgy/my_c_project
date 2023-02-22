//
// Created by pandong on 2023/2/22.
//
#include "stdio.h"

int *test();
int test1();


int main() {
    char *c = "aaaaa";
    printf("%s\n", c);
    printf("%c\n", *c);
    int arr[] = {1, 2, 3, 4};
    int *p_arr = arr;
    printf("%d\n", *p_arr);
    printf("%d\n", *(p_arr + 1));
    printf("%s\n","==============================================================");
    int (*p_method)(int,int) = test1;
    int result = (*p_method)(1,2);
    printf("%d\n",result);
    printf("%s\n","==============================================================");
    int *(*p_method1)() = test;
    int *arr_1 = (*p_method1)();
    printf("%d\n",*(arr_1 + 2));
}

int *test() {
    int result[4];
    int arr[3][4] = {0, 1, 2, 3, 4, 5, 18, 7, 8, 9, 10, 11};
    int (*p)[4] = arr;
    for (int i = 0; i < 4; ++i) {
//        printf("%d\n", *(*(p + 1) + i));
        result[i] = *(*(p + 1) + i);
    }
    int *p_arr = result;
    return p_arr;
}

int test1(int a,int b)
{
   return a + b;
}
