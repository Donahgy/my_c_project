//
// Created by 潘东 on 2023/2/18.
//

#include "stdio.h"
#include "string.h"

int test() {
    char str[] = "http://c.biancheng.net";
    int len = strlen(str);
    printf("%s\n", str);
    for (int i = 0; i < len; ++i) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

int test1() {
    char str[] = "http://c.biancheng.net";
    char *pstr = str;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        printf("%c", *(pstr + i));
    }
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%c", pstr[i]);
    }
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%c", *(str + i));
    }
    printf("\n");
    test();
    return 0;
}

int test3() {
    char *str = "http://c.biancheng.net";
    int len = strlen(str);
    printf("%s\n", str);
    for (int i = 0; i < len; ++i) {
        printf("%c", *(str + i));
    }
    printf("\n");
    for (int i = 0; i < len; ++i) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

int test4() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n", arr);
    // 这种赋值可以
    arr[5] = 'X';
    printf("%s\n", arr);
    char *str = "Hello World";
    printf("%s\n", str);
    // 这种赋值不可以
    str[5] = 'X';
    printf("%s\n", str);
}

int test5() {
    char str[30];
    gets(str);
    printf("%llu\n", strlen(str));
    return 0;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    printf("%d\n", *(p + 8));
    char char_arr[] = {'a', 'b', 'c', 'd'};
    char *p_c = char_arr;
    printf("%c\n", *(p_c + 1));
    printf("%s\n", "-------------------------------------------------------------------");
    int arr_a[] = {0, 1, 44, 3, 4, 5, 6, 7, 8, 9};
    int *p_arr = arr_a;
    printf("%d\n",*(arr_a + 2));
    printf("%d\n",*(p_arr + 2));
}