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

    printf("文字列を入力してください: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("元の文字列です: %s\n", str);
    printf("反転した文字列は: ");
    reverseString(str);
    
    return 0;
}