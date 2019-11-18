#include <stdio.h>

/*
利用递归方法求5!。
*/

int digui(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * digui(num - 1);
    }
}

int main() {
    printf("5! = %d", digui(5));
    system("pause");
    return 0;
}