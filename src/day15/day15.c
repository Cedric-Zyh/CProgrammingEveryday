#include <stdio.h>

/*
利用条件运算符的嵌套来完成此题：
学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
*/

int main() {
    printf("Please input a score:");
    int num;
    scanf("%d", &num);
    char grade = num >= 90 ? 'A' : (num >= 60 ? 'B' : 'C');
    printf("%d: %c\n", num, grade);
    system("pause");
    return 0;
}