//
// Created by 潘东 on 2023/2/19.
//
#include "stdio.h"

void swap(int *a, int *b) {
    printf("\n");
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%p\t%p\n", a, b);
}

void swap1(int a, int b) {
    printf("\n");
    int temp = a;
    a = b;
    b = temp;
    printf("%p\t%p\n", &a, &b);
}

int main() {
    int a = 66, b = 99;
    printf("%p\t%p\n", &a, &b);
    printf("%d\t%d\n", a, b);
    swap1(a, b);
    printf("%d\t%d\n", a, b);
    int *p_a = &a, *p_b = &b;
    swap(p_a, p_b);
    printf("%d\t%d\n", a, b);

}