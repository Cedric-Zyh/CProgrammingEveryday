#include <stdio.h>
#define exchange(x, y) {int t = x; x = y; y = t;}

/*
宏#define命令练习2。
*/

int main() {
    int x = 10;
    int y = 20;
    printf("x=%d, y=%d\n", x, y);
    exchange(x, y);
    printf("x=%d, y=%d\n", x, y);
    system("pause");
    return 0;
}