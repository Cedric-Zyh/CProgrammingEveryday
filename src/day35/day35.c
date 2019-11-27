#include <stdio.h>

/*
字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
*/

void reverse(char* str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i- 1) = temp;
    }
}

int main() {
    char str[] = "www.runoob.com";
    printf("origin str: %s\n", str);
    reverse(str);
    printf("reverse str: %s\n", str);
    system("pause");
    return 0;
}