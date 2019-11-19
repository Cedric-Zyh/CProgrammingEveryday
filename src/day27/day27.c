#include <stdio.h>

/*
利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
*/

void plain(int n) {
    if (n < 1) {
        printf("results = ");
        return;
    } else {
        char c = getchar();
        plain(n - 1);
        putchar(c);
    }
    
}

int main() {
    printf("Please enter 5 chars:");
    plain(5);
    printf("\n");
    system("pause");
    return 0;
}