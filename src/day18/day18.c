#include <stdio.h>

/*
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。
*/

int main() {
    int a, n, total = 0;
    printf("Please input the number a and n:");
    scanf("%d%d", &a, &n);
    int temp = a;
    for (int i = 0; i < n; i++) {
        total += temp;
        printf("%d", temp);
        if (i == n - 1) {
            printf(" = %d", total);
        } else {
            printf(" + ");
            temp = temp + (temp - (temp / 10)) / a * 10 * a;
        }
    }
    printf("\n");
    system("pause");
    return 0;
}