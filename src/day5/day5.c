#include <stdio.h>

#define swap(a, b) {a = a + b; b = a - b; a = a - b;}

/*
输入三个整数x,y,z，请把这三个数由小到大输出。
*/

void method_1() {
    int x, y, z;
    printf("Please input the x, y and z:");
    scanf("%d %d %d", &x, &y, &z);
    int t;
    if (x > y) {
        t = x;
        x = y;
        y = t;
    }

    if (x > z) {
        t = x;
        x = z;
        z = t;
    }

    if (y > z) {
        t = y;
        y = z;
        z = t;
    }
    printf("reault:%d %d %d", x, y, z);
}

void method_2() {
    int x, y, z;
    printf("Please input the x, y and z:");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        swap(x, y);
    }

    if (x > z) {
        swap(x, z)
    }

    if (y > z) {
        swap(y, z);
    }
    printf("reault:%d %d %d", x, y, z);
}

int main() {
    method_1();
    // method_2();
    system("pause");
    return 0;
}