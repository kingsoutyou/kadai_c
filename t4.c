#include <stdio.h>

int main(void)
{
    int score;

    printf("���Ȃ��̐��т���͂��Ă��������B ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("���Ȃ��̐��т͗D�ł�\n");
    }
    else if (score >= 60)
    {
        printf("���Ȃ��̐��т͗ǂł�\n");
    }
    else
    {
        printf("���Ȃ��̐��т͉ł�\n");
    }

    return 0;
}
