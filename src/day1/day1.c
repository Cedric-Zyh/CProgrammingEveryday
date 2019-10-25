#include<stdio.h>

/*
题目：有1、2、3、4个数字，能组成多少个互不相同
且无重复数字的三位数？都是多少？
*/

// 通常方法
void method_1() 
{
    int i, j, k;
    int count = 0;
    for (i = 1; i < 5; i++) 
    {
        
        for (j = 1; j < 5; j++) 
        {
            // 减少循环次数
            if (i == j)
            {
                continue;
            }
            for (k = 1; k < 5; k++) 
            {
                if (i == k || j == k)
                {
                    continue;
                }
                count++;
                printf("%d%d%d\n", i, j, k);                
            }
        }
    }
    printf("There are %d results.\n", count);
}

// 方法二（该方法适合从n个数中选出n-1个不同的数进行组合）
int arr[] = {1, 2, 3, 4};
int count = 0;
int swap_count = sizeof(arr) / sizeof(int) - 1;
void swap(int position_1, int position_2) {
    int temp = arr[position_1];
    arr[position_1] = arr[position_2];
    arr[position_2] = temp;
}

void method_2(int step) {
    if (step == 5)
    {
        printf("There are %d results.\n", count);
        return;
    }
    
    for (int i = swap_count; i > 0; i--)
    {
        swap(i, i - 1);
        printf("%d%d%d\n", arr[0], arr[1], arr[2]);
        printf("%d%d%d\n", arr[3], arr[2], arr[1]);
        count += 2;
    }
    method_2(step + 1);
}

int main() 
{
    method_1();
    printf("\n");
    method_2(1);

    system("pause");
    return 0;
}