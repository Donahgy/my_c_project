#include <stdio.h>

void say();

int test() {
    char a[4] = {'a', 'e', 'c'};
    char *x = &a;
//    printf("%s\n", x);
//    printf("%c\n", *x);
//    printf("%p\n", x);
    // 000000000061FE0C 000000000061FE0D 000000000061FE0E

    int b[3] = {1, 2, 3};
    char *y = &b;
//    printf("%s\n", y);
//    printf("%d\n", *y);
//    printf("%p\n", y);
    // 000000000061FE00 000000000061FE04 000000000061FE08

    char c = 'c';
    char *z = &c;
    char **p = &z;

    printf("%p\t%p\t%p\n",&z,z,*z);

    printf("%p\t%p\t%p", p, *p, **p);
}


