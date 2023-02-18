//
// Created by pandong on 2023/2/17.
//
#include "stdio.h"

void test(int pint,int *p_int);

int my_main() {
    char a = 'a', c = 'c';
    char *p_a = &a;
    char **_pa = &p_a;
    printf("%p\t%p\t%p\n", &a, &c, &p_a);
    printf("%p\t%p\t%c\n", _pa, *_pa, **_pa);
    p_a = &c;
    printf("%p\t%p\t%c\n", _pa, *_pa, **_pa);
    printf("%c\t%p\n", *&c, &*p_a);
    printf("%s\n", "-----------------------------------------------------------------------------");
    int a1 = 10, *p_a1 = &a1, *p_a2 = &a1;
    double b2 = 99.9, *p_b2 = &b2;
    char c2 = '@', *p_c2 = &c2;
    printf("&a1=%p\t&b2=%p\t&c2=%p\n", &a1, &b2, &c2);
    printf("p_a1=%p\tp_b2=%p\tp_c2=%p\n", p_a1, p_b2, p_c2);
    // 加法运算
    p_a1++;
    p_b2++;
    p_c2++;
    printf("p_a1=%p\tp_b2=%p\tp_c2=%p\n", p_a1, p_b2, p_c2);
    // 减法运算
    p_a1 -= 2;
    p_b2 -= 2;
    p_c2 -= 2;
    printf("p_a1=%p\tp_b2=%p\tp_c2=%p\n", p_a1, p_b2, p_c2);
    //比较运算
    if (p_a1 == p_a2) {
        printf("%d\n", *p_a2);
    } else {
        printf("% d\n", *p_a1);
    }
     test(a1,p_a2);
}

void test(int p,int *p_1)
{
    printf("%d\t%p\n",p,p_1);
}
