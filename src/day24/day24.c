#include <stdio.h>

/*
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
*/

int main() {
    double a = 2, b = 1;
    double sum = a / b;
    for (int i = 1; i < 20; i++) {
        int temp = a;
        a = a + b;
        b = temp;
        sum += a / b;
    }
    printf("sum is %f", sum);
    system("pause");
    return 0;
}