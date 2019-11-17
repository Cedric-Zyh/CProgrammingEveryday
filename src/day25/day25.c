#include <stdio.h>

/*
求1+2!+3!+...+20!的和。
*/

int main() {
    double sum = 0;
    double temp = 1;
    for (int i = 1; i < 21; i++) {
        temp = temp * i;
        sum += temp;
    }
    printf("The sum is %f", sum);
    system("pause");
    return 0;
}