#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[1024];

    printf("���������͂��Ă�������: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("���̕�����ł�: %s\n", str);
    printf("���]�����������: ");
    reverseString(str);
    
    return 0;
}