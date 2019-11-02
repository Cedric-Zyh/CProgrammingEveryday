#include <stdio.h>

/*
打印楼梯，同时在楼梯上方打印两个笑脸。
*/

int main() {
    SetConsoleOutputCP(437);
    printf("\1\1\n");
    for (int i = 1; i < 11; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", 219);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}