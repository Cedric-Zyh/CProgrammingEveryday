#include <stdio.h>
#include "test.h"

/*
#include的应用练习
*/

int main() {
    int x, y;
    printf("Please enter tow numbers:");
    scanf("%d %d", &x, &y);
    if (x LAG y) {
        printf("%d greater than %d", x, y);
    } else if (x SMA y) {
        printf("%d less than %d", x, y);
    } else if (x EQ y) {
        printf("%d equal to %d", x, y);
    } else {
        printf("error!");
    }
    system("pause");
    return 0;
}