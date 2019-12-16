#include <stdio.h>

/*
取一个整数 a 从右端开始的 4～7 位。
*/

int main() {
    // 无符号数unsigned
    unsigned a = 036; // 11110
    unsigned b = a >> 4; // 1
    printf("~0 = %d\n", ~0);// -1，为什么~0等于-1? https://blog.csdn.net/u013025612/article/details/78527000
    printf("~0 << 4 = %d\n", ~0 << 4); // -16
    unsigned c = ~(~0 << 4); // 八进制：017，二进制：1111
    printf("a = %o b = %o c = %o\n", a, b, c);
    unsigned d = b & c; // 0001 & 1111
    printf("a = %o d = %o\n", a, d);
    system("pause");
    return 0;
}