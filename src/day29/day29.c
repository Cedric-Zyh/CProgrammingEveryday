#include <stdio.h>

/*
给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
*/

int main() {
    int a, b, c, d, e;
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    a = num / 10000;
    b = num % 10000 / 1000;
    c = num % 1000 / 100;
    d = num % 100 / 10;
    e = num % 10;
    if (a != 0) {
        printf("five digit number. reverse number is %d%d%d%d%d\n", e, d, c, b, a);
    } else if (b != 0) {
        printf("four digit number. reverse number is %d%d%d%d\n", e, d, c, b);
    } else if (c != 0) {
        printf("three digit number. reverse number is %d%d%d\n", e, d, c);
    } else if (d != 0) {
        printf("two digit number. reverse number is %d%d\n", e, d);
    } else {
        printf("one digit number. reverse number is %d\n", e);
    }
    system("pause");
    return 0;
}