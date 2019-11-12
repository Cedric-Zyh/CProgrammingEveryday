#include <stdio.h>
#define HEIGHT 100;

/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

int main() {
    double total = 0.0;
    double height = 100.0;
    for (int i = 0; i < 10; i++) {
        // 落地
        total += height;
        // 反弹
        height = height / 2.0;
        if (i == 9) {
            printf("Total = %f, height = %f\n", total, height);
        } else {
            total += height;
        }
    }
    system("pause");
    return 0;
}