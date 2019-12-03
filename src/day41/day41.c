#include <stdio.h>

/*
学习static定义静态变量的用法。
*/

void fun() {
    int i = 0;
    static static_i = 0;
    printf("i = %d\n", i);
    printf("static_i = %d\n", static_i);
    i++;
    static_i++;
}

int main() {
    for (int i = 0; i < 3; i++) {
        fun();
    }
    system("pause");
    return 0;
}