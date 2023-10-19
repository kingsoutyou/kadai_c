#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int ans = rand() % 10;
    int input;

    printf("数を入力してください (0から9までの数字): ");
    scanf("%d", &input);

    if (input < 0 || input > 9) {
        printf("0から9までの数字を入力してください。\n");
        return 1;
    }

    if (input == ans)
    {
        printf("正解です！\n");
    }
    else
    {
        printf("不正解です。\n");
        printf("正解は %d でした。\n", ans);
    }

    return 0;
}