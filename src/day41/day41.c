#include <stdio.h>

/*
学习static定义静态变量的用法。
*/

void fun() {
    int i = 0;
    static int static_i = 0;
    printf("i = %d\n", i);
    printf("fun static_i = %d\n", static_i);
    printf("fun &static_i = %p\n", &static_i);
    i++;
    static_i++;
}

int main() {
    for (int i = 0; i < 3; i++) {
        fun();
        // 该static_i与fun函数中的static_i不是同一个静态变量
        static int static_i = 0;
        static_i++;
        printf("main static_i = %d\n", static_i);
        printf("main &static_i = %p\n", &static_i);
    }
    system("pause");
    return 0;
}