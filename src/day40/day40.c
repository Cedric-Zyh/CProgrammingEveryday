#include <stdio.h>

/*
将一个数组逆序输出。
*/

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    for (int i = 9; i >= 0; i--) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}