#include <stdio.h>

/*
输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
*/

int main() {
    // API函数SetConsoleOutputCP用于设置控制台程序输出代码页
    SetConsoleOutputCP(437);
    char a = 176, b = 219;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == i || j == (4 - i)) {
                printf("%c", b);
            } else {
                printf("%c%c", a, a);
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}