#include <stdio.h>

int main() {
    int x, y, z;

    printf("3つの整数を入力してください: ");
    scanf("%d %d %d", &x, &y, &z);

    int min = x;
    
    if (y < min) {
        min = y;
    }
    
    if (z < min) {
        min = z;
    }

    printf("入力された整数の最小値: %d\n", min);

    return 0;
}