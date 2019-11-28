#include <stdio.h>
#include <math.h>

/*
求100之内的素数。
*/

int isPrimeNumber(int num) {
    int i;
    if (num < 2) {
        return 0;
    }
    
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
        
    }
    return 1;
}

int main() {
    for (int i = 0; i <= 100; i++) {
        if (isPrimeNumber(i)) {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}