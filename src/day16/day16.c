#include <stdio.h>

/*
输入两个正整数m和n，求其最大公约数和最小公倍数。
（1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；
（2）求最大公约数用辗转相除法
*/

int main() {
    printf("Please input two integers:");
    int m, n;
    scanf("%d%d", &m, &n);
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    int r = m % n;
    int x = m * n;
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    printf("The greatest common divisor is %d, hte lowest common multiple is %d\n", n, x / n);
    system("pause");
    return 0;
}