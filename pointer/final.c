//
// Created by 潘东 on 2023/2/21.
//
#include "stdio.h"

int max(int a,int b)
{
    return a > b? a : b;
}

int main()
{
    int x,y,maxVal;
    int (*pmax)(int,int) = max;
    printf("Input two numbers:");
    scanf("%d %d", &x, &y);
    maxVal = (*pmax)(x,y);
    printf("Max value: %d\n", maxVal);
    return 0;
}
