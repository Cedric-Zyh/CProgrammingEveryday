#include <stdio.h>

/*
古典问题（兔子生崽）：有一对兔子，
从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，
假如兔子都不死，问每个月的兔子总数为多少？
（输出前40个月即可）
规律：1 1 2 3 5 8 13 21 34 ...
*/

int main() {
    int current = 1;
    int temp = 0;
    for (int i = 0; i < 40; i++) {
        printf("%d\n", current);
        current = temp + current;
        temp = current - temp;
    }
    system("pause");
    return 0;
}