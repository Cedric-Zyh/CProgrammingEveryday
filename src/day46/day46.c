#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SQUARE(x) (x) * (x)

/*
宏#define命令练习。
*/

int main() {
    int num;
    int t = TRUE;
    while (t) {
        printf("Please enter a number:");
        scanf("%d", &num);
        int s = SQUARE(num);
        printf("The square of %d is %d\n", num, s);
        t = s > 50 ? FALSE : TRUE;
    }
    system("pause");
    return 0;
}