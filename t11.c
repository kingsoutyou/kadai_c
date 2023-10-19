#include <stdio.h>

int main(void)
{
    int x1, x2, tmp;

    printf("2つの値を入力してください");
    scanf("%d %d", &x1, &x2);

    printf("入れ替え前:\n");
    printf(" %d\n %d\n", x1, x2);

    tmp = x1;
    x1 = x2;
    x2 = tmp;

    printf("入れ替え後:\n");
    printf("値1は、%dとなりました\n値2は、%dになりました\n", x1, x2);

    return 0;
}