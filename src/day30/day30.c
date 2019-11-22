#include <stdio.h>

/*
一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
*/

int main() {
    printf("Please enter a five digits number:");
    int num;
    scanf("%d", &num);
    int a = num / 10000;
    int b = num % 10000 / 1000;
    int c = num % 100 / 10;
    int d = num % 10;
    if (a == d && b == c) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    system("pause");
    return 0;
}