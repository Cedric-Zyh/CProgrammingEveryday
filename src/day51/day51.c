#include <stdio.h>

/*
学习使用按位与 &。
*/

int main() {
    int a, b;
    // 8进制
    a = 077;
    b = a & 3;
    printf("a = %d\tb = %d\n", a, b);
    b &= 7;
    printf("b = %d\n", b);
    system("pause");
    return 0;
}