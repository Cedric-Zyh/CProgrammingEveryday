#include <stdio.h>
#include <math.h>

/*
判断一个数字是否为质数。
*/

int isPrimeNumber(int num) {
    if (num < 2) {
        return 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main() {
    int num;
    printf("Please enter a num:");
    scanf("%d", &num);
    // int flag = 1;
    // for (int i = 2; i <= sqrt(num); i++) {
    //     if (num % i == 0) {
    //         flag = 0;
    //         break;
    //     }
    // }
    if (isPrimeNumber(num) == 0) {
        printf("Number %d is not a prime number.\n", num);
    } else {
        printf("Number %d is a prime number.\n", num);
    }
    system("pause");
    return 0;
}