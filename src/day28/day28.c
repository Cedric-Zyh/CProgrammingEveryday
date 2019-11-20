#include <stdio.h>

/*
有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
问第2个人，说比第一个人大两岁。最后问第一个人，
他说是10岁。请问第五个人多大？
*/

int digui(int n) {
    if (n == 1) {
        return 10;
    } else {
        return 2 + digui(n - 1);
    }
}

int main() {
    // 方法一
    // int age = 10;
    // for (int i = 1; i < 5; i++) {
    //     age += 2;
    // }

    // 方法二
    int age = digui(5);

    printf("age = %d\n", age);
    system("pause");
    return 0;
}