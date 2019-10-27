#include <stdio.h>

/*
输入某年某月某日，判断这一天是这一年的第几天？
*/

int month_31[] = {1, 3, 5, 7, 8, 10, 12};
int month_30[] = {4, 6, 9, 11};

int caculate(int month, int day) {
    int total = 0;
    for (int i = 0; i < sizeof(month_31) / sizeof(int); i++) {
        if (month > month_31[i]) {
            total += 31;
        } else if (month == month_31[i]) {
            total += day;
            break;
        }
    }
    for (int i = 0; i < sizeof(month_30) / sizeof(int); i++) {
        if (month > month_30[i]) {
            total += 30;
        } else if (month == month_30[i]) {
            if (month == 31) {
                printf("input error!");
                return -1;
            } else {
                total += day;
                break;
            }                    
        }                   
    }
    return total;
}

int main() {
    int year, month, day;
    printf("Please input the year, mount and day:");
    scanf("%d %d %d", &year, &month, &day);
    if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > 31) {
        printf("input error!");
    } else {
        if (month < 2) {
            if (day > 31) {
                printf("input error!");
            } else {
                printf("Total day is:%d", day);
            }
        } else {
            if (month == 2 && day > 29) {
                printf("input error!");
            } else if (month == 2 && day <= 28) {
                printf("Total day is:%d", day + 31);
            } else {
                // 判断闰年
                int flag = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
                if (month == 2) {
                    if (flag) {
                        printf("Total day is:%d", day + 31);
                    } else {
                        printf("input error!");
                    }
                } else {
                    int total = caculate(month, day);
                    if (total > 0) {
                        total += (flag ? 29 : 28);
                        printf("Total day is:%d", total);
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}