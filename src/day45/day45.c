#include <stdio.h>

/*
学习使用register定义变量的方法。

在早期c语言编译器不会对代码进行优化，因此使用register关键字修饰变量是很好的补充，大大提高的速度。
register关键字请求让编译器将变量a直接放入寄存器里面，以提高读取速度
*/

int main() {
    register int i;
    int temp = 0;
    for (i = 0; i <= 100; i++) {
        temp += i;
    }
    printf("temp = %d\n", temp);
    system("pause");
    return 0;
}