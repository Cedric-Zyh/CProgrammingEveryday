#include <stdio.h>
#include <math.h>

/*
判断1到200之间的素数。
*/

int main() {
    int flag;
    int total = 0;
    for (int i = 2; i < 201; i++) {
        flag = 1;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0 && j != 1) {
                flag = 0;
            }
        }
        if (flag == 1) {
            total++;
            printf("%d\n", i);
        }
    }
    printf("Total is %d", total);
    system("pause");
    return 0;
}