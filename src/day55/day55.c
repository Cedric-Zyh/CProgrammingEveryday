#include <stdio.h>

/*
学习使用按位取反~。
*/

int main() {
    int a = 234;
    int b = ~a;
    printf("%d\t%x\n", b, b);
    system("pause");
    return 0;
}