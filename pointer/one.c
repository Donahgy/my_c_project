//
// Created by pandong on 2023/2/17.
//
#include "stdio.h"

int test() {
    int a = 1;
    int *p_a = &a;
    printf("%d %d\n", a, *p_a);

    int a1 = 15, b = 99, c = 222;
    int *p_a1 = &a1;
    *p_a1 = b;
    c = *p_a1;
    printf("%d, %d, %d, %d\n", a1, b, c, *p_a1);

    printf("\n");
    int a2 = 100, b2 = 999, temp;
    int *p_a2 = &a2, *p_b2 = &b2;
    printf("a2=%d,b2=%d\n", a2, b2);
    temp = *p_a2;
    *p_a2 = *p_b2;
    *p_b2 = temp;
    printf("a2=%d,b2=%d\n", a2, b2);
}