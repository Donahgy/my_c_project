//
// Created by pandong on 2023/2/17.
//
#include "stdio.h"


// http://c.biancheng.net/view/1992.html

int test()
{
    int arr[] = {99,15,100,888,259};
    int len = sizeof(arr)/ sizeof(int);
    printf("%p\n",arr);
    for (int i = 0; i < len; ++i) {
        printf("%d\t%p\n",*(arr + i),&arr[i]);
    }
    printf("%llu\n", sizeof(arr));
    return 0;
}
