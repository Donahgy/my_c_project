//
// Created by 潘东 on 2023/2/21.
//
#include "stdio.h"

int test();

int main()
{
    // 1 2  3  4
    // 5 6  7  8
    // 9 10 11 12
    int a[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int (*p)[4] = a;
    printf("%d\n", sizeof(*(p + 1)));
    printf("%d\n",*(*(p + 1) + 1));
    printf("%d %d\n",(p[1][2]),a[1][2]);
    printf("%d %d\n",*(*(a + 1) + 1),*(p + 1));
    test();
}

int test()
{
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int (*p)[4] = a;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",*(*(p + i) + j));
        }
        printf("\n");
    }
    printf("%d\n", sizeof(p));
    int *(p1[5]);
    printf("%d\n", sizeof(p1));
}