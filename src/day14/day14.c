#include <stdio.h>

/*
将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5
*/

int main() {
    int num;
    printf("Please input a integer: ");
    scanf("%d", &num);
    int temp = num;
    printf("%d = ", num);
    while (temp != 1) {
        for (int i = 2; i <= temp; i++) {
            if (temp % i == 0) {
                printf("%d", i);
                if (temp != i) {
                    printf(" * ");
                }
                temp = temp / i;
                break;
            }
        }
    }
    

    system("pause");
    return 0;
}