#include <stdio.h>

/*
要求输出国际象棋棋盘。
国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列
*/

int main() {
    SetConsoleOutputCP(437);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                printf("%c", 219);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}