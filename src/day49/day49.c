#include <stdio.h>
#define MAX
#define MAX_NUM(x, y) (x > y) ? x : y
#define MIN_NUM(x, y) (x < y) ? x : y

/*
#if #ifdef和#ifndef的综合应用。
*/

void printMaxNum(int a, int b) {
#ifdef MAX
    printf("max num is %d\n", MAX_NUM(a, b));
#else
    printf("min num is %d\n", MIN_NUM(a, b));
#endif
}

void printMinNum(int a, int b) {
#ifdef MIN
    printf("min num is %d\n", MIN_NUM(a, b));
#else
    printf("max num is %d\n", MAX(a, b));
#endif
}

int main() {
    int a = 10, b = 20;
#ifdef MAX
    printf("max num is %d\n", MAX_NUM(a, b));
#else
    printf("min num is %d\n", MIN_NUM(a, b));
#endif

#ifdef MIN
    printf("min num is %d\n", MIN_NUM(a, b));
#else
    printf("max num is %d\n", MAX_NUM(a, b));
#endif

#undef MAX

#ifdef MAX
    printf("max num is %d\n", MAX_NUM(a, b));
#else
    printf("min num is %d\n", MIN_NUM(a, b));
#endif

#define MIN

#ifdef MIN
    printf("min num is %d\n", MIN_NUM(a, b));
#else
    printf("max num is %d\n", MAX_NUM(a, b));
#endif
    system("pause");
    return 0;
}