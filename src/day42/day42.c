#include <stdio.h>

/*
学习使用auto定义变量的用法。
*/

int main() {
    int num;
    num = 2;
    for (int i = 0; i < 3; i++) {
        printf("num = %d and &num = %p\n", num, &num);
        num++;
        {
            auto int num = 1;
            printf("auto num = %d and &num = %p\n", num, &num);
            num++;
        }
    }
    system("pause");
    return 0;
}