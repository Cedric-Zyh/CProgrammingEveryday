#include <stdio.h>

/*
输入3个数a,b,c，按大小顺序输出。
*/

void swap(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);
    printf("%d %d %d\n", a, b, c);
    system("pause");
    return 0;
}