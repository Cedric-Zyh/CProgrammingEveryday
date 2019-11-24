#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
*/

int main() {
    char s[5] = "aba";
    char result[5];
    int i;
    int n = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != 'a') {
            result[n] = s[i];
            n++;
        }
    }
    result[n] = '\0';
    strcpy(s, result);
    printf("s = %s\n", s);
    system("pause");
    return 0;
}