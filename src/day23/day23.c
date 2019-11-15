#include <stdio.h>
#define N 7
/*
打印出如下图案（菱形）。
   *
  ***
 *****
*******
 *****
  ***
   *
*/

int main() {
    for (int i = 0; i < N; i++) {
        int n = (2 * i + 1);
        int start = (N - n) / 2;
        if (start < 0) {
            start = -start;
        }
        int end = N - (start + 1);
        for (int j = 0; j < N; j++) {
            if (j < start || j > end) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}