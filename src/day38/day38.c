#include <stdio.h>
#define N 3

/*
求一个3*3矩阵对角线元素之和
*/

int main() {
    int arr[N][N];
    int i, j;
    int sum;
    for (i = 0; i < N; i++) {
        for (j = 0; j< N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        sum += arr[i][i];
        if (i != (N - 1) / 2) {
            sum += arr[i][N - 1 - i];
        }
    }
    printf("sum = %d", sum);
    system("pause");
    return 0;
}