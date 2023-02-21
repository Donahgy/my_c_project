//
// Created by 潘东 on 2023/2/19.
//
#include "stdio.h"

int main() {
    int a = 100;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    printf("%d\t%d\t%d\t%d\n", a, *p1, **p2, ***p3);
    printf("&p2=%#X,p3=%#X\n", &p2, p3);
    printf("&p1=%#X,p2=%#X,*p3=%#X\n", &p1, p2, *p3);
    printf("&a=%#X,p1=%#X,*p2=%#X,**p3=%#X\n", &a, p1, *p2, **p3); //**p3 = *p2 = p1 = &a
}
