#include <stdio.h>

/*
学习使用static的另一用法。
*/

int main() {
    int num;
    num = 2;
    for (int i = 0; i < 3; i++) {
        printf("num = %d  &num = %p\n", num, &num);
        num++;
        {
            static int num = 1;
            printf("static num = %d  &num = %p\n", num, &num);
            num++;
        }
    }
    system("pause");
    return 0;
}