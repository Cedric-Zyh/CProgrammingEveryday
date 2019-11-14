#include <stdio.h>

/*
两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，
乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
*/

int main() {
    char arr1[] = {'a', 'b', 'c'};
    char arr2[] = {'x', 'y', 'z'};
    int length2 = sizeof(arr2) / sizeof(char);
    // 先求a的对手
    for (int i = 0; i < length2; i++) {
        if (arr2[i] != 'x') {
            // 再求c的对手
            for (int j = 0; j < length2; j++) {
                if (j != i && arr2[j] != 'x' && arr2[j] != 'z') {
                    // 最后求b的对手
                    for (int k = 0; k < length2; k++) {
                        if (k != i && k != j) {
                            printf("a - %c, b - %c, c - %c\n", arr2[i], arr2[k], arr2[j]);
                        }
                    }
                }
                
            }
        }
    }
    system("pause");
    return 0;
}