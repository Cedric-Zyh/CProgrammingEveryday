#include <stdio.h>

/*
请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
*/

int main() {
    char first;
    char second;
    printf("Please enter the first letter:");
    scanf("%c", &first);
    //scanf("%c",&j);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar() 吃掉换行符
    getchar();
    switch (first) {
        case 'm':
            printf("Monday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 't':
            printf("Please enter the second letter:");
            scanf("%c", &second);
            if (second == 'u') {
                printf("Tuesday\n");
            } else if (second == 'h') {
                printf("Thursday\n");
            }
            break;
        case 's':
            printf("Please enter the second letter:");
            scanf("%c", &second);
            if (second == 'a') {
                printf("Saturday\n");
            } else if (second == 'u') {
                printf("Sunday\n");
            }
            break;
        default:
            break;
    }
    system("pause");
    return 0;
}