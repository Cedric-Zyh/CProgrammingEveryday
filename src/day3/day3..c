#include <stdio.h>
#include <math.h>

/*
一个整数，它加上100后是一个完全平方数，
再加上168又是一个完全平方数，请问该数是多少？
*/

/*
分析：
设x为所求的数，m, n均为整数
x + 100 = m^2; 
x + 100 + 168 = n^2;
则n^ - m^2 = 168; 即(n + m) * (n - m) = 168；
令i = n + m; j = n - m; 
则i * j = 168;
则i和j中至少有一个是偶数；
又m = (i - j) / 2; n = (i + j) / 2;
知i和j同奇或同偶，又至少一个是偶数
所以i和j都为偶数；
知i >= j;
知j^2 <= 168 ==> j <= 12;
*/

int main() {
    for (int j = 2; j <= sqrt(168); j += 2) {
        if (168 % j == 0) {
            int i = 168 / j;
            if (i % 2 == 0) {
                int m = (i - j) / 2;
                int x = m * m - 100;
                printf("%d\n", x);
            }
        }
    }

    system("pause");
    return 0;
}