#include <stdio.h>

/*
输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
*/

int main() {
    char c;
    int letters = 0;
    int blanks = 0;
    int numbers = 0;
    int others = 0;
    printf("Please input some chars:");
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') 
            || (c >= 'A' && c <= 'Z')) {
                letters++;
        } else if (c == ' ') {
            blanks++;
        } else if (c >= '0' && c <= '9') {
            numbers++;
        } else {
            others++;
        }
    }
    printf("letters = %d, blanks = %d, numbers = %d, others = %d", letters, blanks, numbers, others);
    system("pause");
    return 0;
}