//
// Created by 潘东 on 2023/2/19.
//
#include "stdio.h"

int max(int *intArr, int len) {
    int maxValue = intArr[0];
    for (int i = 1; i < len; ++i) {
        if (maxValue < intArr[i]) {
            maxValue = intArr[i];
        }
    }
    return maxValue;
}

int max1(int intArr[],int len)
{
    int maxValue = intArr[0];
    for (int i = 1; i < len; ++i) {
        if(maxValue < intArr[i] )
        {
            maxValue = intArr[i];
        }
    }
    return maxValue;
}

int main() {
    int intArr[6];
    printf("%p\t%p\n", &intArr, intArr);
    printf("%p\n", &intArr);
    int len = sizeof(intArr) / sizeof(int);
    for (int i = 0; i < len; i++) {
        // scanf函数操作的是地址
        scanf("%d", &intArr[i]);
    }
    printf("%d\n", intArr);
    printf("max () Max value is %d!\n", max(intArr, len));
    printf("max1 () Max value is %d!\n", max1(intArr, len));
}
