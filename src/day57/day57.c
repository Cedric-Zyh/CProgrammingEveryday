#include <stdio.h>

/*
输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
*/

int main() {
    int s[20];
    int n;
    printf("Please enter the size of array(<20):");
    scanf("%d", &n);
    if (n > 20) {
        n = 20;
    } else if (n < 1) {
        n = 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] > s[max_index]) {
            max_index = i;
        }
        if (s[i] < s[min_index]) {
            min_index = i;
        }
    }
    if (max_index != min_index) {
        if (max_index != 0) {
            if (min_index == 0) {
                int temp = s[0];
                if (max_index == n - 1) {
                    s[0] = s[max_index];
                    s[max_index] = temp;
                } else {
                    s[0] = s[max_index];
                    s[max_index] = s[n - 1];
                    s[n - 1] = temp;
                }
            } else if (min_index == n - 1) {
                int temp = s[max_index];
                s[max_index] = s[0];
                s[0] = temp;
            } else {
                int temp = s[max_index];
                s[max_index] = s[0];
                s[0] = temp;
                temp = s[min_index];
                s[min_index] = s[n - 1];
                s[n - 1] = temp;
            }
        } else {
            int temp = s[min_index];
            s[min_index] = s[n - 1];
            s[n - 1] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}