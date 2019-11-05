#include <stdio.h>

/*
打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，
其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，
因为153=1的三次方＋5的三次方＋3的三次方。
*/

int main() {
    for (int i = 100; i < 1000; i++) {
        int a = i / 100;
        int b = i % 100 / 10;
        int c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i) {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}