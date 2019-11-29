#include <stdio.h>
#define N 10
/*
对10个数进行排序。
*/

int main() {
    int n[N];
    printf("Please enter ten numbers:");
    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (n[i] > n[j]) {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\t", n[i]);
    }
    system("pause");
    return 0;
}