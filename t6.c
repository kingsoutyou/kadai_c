#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int ans = rand() % 10;
    int input;

    printf("������͂��Ă������� (0����9�܂ł̐���): ");
    scanf("%d", &input);

    if (input < 0 || input > 9) {
        printf("0����9�܂ł̐�������͂��Ă��������B\n");
        return 1;
    }

    if (input == ans)
    {
        printf("�����ł��I\n");
    }
    else
    {
        printf("�s�����ł��B\n");
        printf("������ %d �ł����B\n", ans);
    }

    return 0;
}