#include <stdio.h>

/*
学习使用external的用法。
*/

int a, b, c;

void add() {
    int a;
    a = 3;
    c = a + b;
}

int main() {
    a = b = 4;
    add();
    printf("a = %d\tb = %d\tc = %d\n", a, b, c);
    system("pause");
    return 0;
}