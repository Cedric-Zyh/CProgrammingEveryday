#include <stdio.h>

/*
一个数如果恰好等于它的因子之和，这个数就称为"完数"。
例如6=1＋2＋3.编程找出1000以内的所有完数。
*/

int main() {
    for (int i = 2; i < 1000; i++) {
        int total = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                total += j;
            }
        }
        if (i == total) {
            printf("%d\n", i);
        }    
    }
    system("pause");
    return 0;
}