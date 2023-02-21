//
// Created by 潘东 on 2023/2/21.
//
#include "stdio.h"

int test();
int test1();

int main() {
    int a = 16, b = 932, c = 100;
    int num_arr1[3] = {a,b,c};
    int *arr[3] = {&a, &b, &c};
    int **p = arr;
    printf("%d\n", sizeof(num_arr1));
    printf("%d\n", sizeof(arr));
    printf("%d,%d,%d\n",*arr[0],*arr[1],*arr[2]);
    printf("%d,%d,%d\n",**(p + 0),**(p + 1),**(p + 2));
    printf("%p,%p,%p\n",*(p + 0),*(p + 1),*(p + 2));
    printf("%p,%p,%p\n",&a,&b,&c);
    printf("%s\n","----------------------------------------------------");
    int num_arr[] = {1,2,3,4};
    int *p_arr = num_arr;
    printf("%d,%d,%d\n",*(p_arr + 0),*(p_arr + 1),*(p_arr + 2));
    printf("%s\n","----------------------------------------------------");
    test();
    printf("%s\n","----------------------------------------------------");
    test1();
    return 0;
}

int test()
{
    // 字符数组 str 中存放的是字符串的首地址，不是字符串本身，字符串本身位于其他的内存区域，和字符数组是分开的。
    char *str[3] = {"c.biancheng.net","C语言中文网","C Language"};
    printf("%p\n", str[2]);
    printf("%s\n%s\n%s\n",str[0],str[1],str[2]);
    return 0;
}

int test1()
{
    int arr[4] = {1,2,3,4};
    int *p_arr = arr;
    printf("%d %d %d %d\n",*(p_arr+ 0),*(p_arr+ 1),*(p_arr+ 2),*(p_arr+ 3));
    printf("%p %p %p %p",(p_arr+ 0),(p_arr+ 1),(p_arr+ 2),(p_arr+ 3));
    return 0;
}
