#include <stdio.h>

/*
有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
*/

int main() {
    int arr[11]={1,4,6,9,13,16,19,28,40,100};
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    arr[10] = num;
    for (int i = 9; i >= 0; i--) {
        if (arr[i] > num) {
            arr[i + 1] = arr[i];
            arr[i] = num;
        } else {
            break;
        }
    }
    for (int i = 0; i < 11; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}