#include <stdio.h>

int main() {
    int x, y, z;

    printf("3�̐�������͂��Ă�������: ");
    scanf("%d %d %d", &x, &y, &z);

    int min = x;
    
    if (y < min) {
        min = y;
    }
    
    if (z < min) {
        min = z;
    }

    printf("���͂��ꂽ�����̍ŏ��l: %d\n", min);

    return 0;
}