#include <stdio.h>

int main(void)
{
    int x1, x2, tmp;

    printf("2�̒l����͂��Ă�������");
    scanf("%d %d", &x1, &x2);

    printf("����ւ��O:\n");
    printf(" %d\n %d\n", x1, x2);

    tmp = x1;
    x1 = x2;
    x2 = tmp;

    printf("����ւ���:\n");
    printf("�l1�́A%d�ƂȂ�܂���\n�l2�́A%d�ɂȂ�܂���\n", x1, x2);

    return 0;
}