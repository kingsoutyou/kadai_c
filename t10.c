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

    printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Œ³‚Ì•¶Žš—ñ‚Å‚·: %s\n", str);
    printf("”½“]‚µ‚½•¶Žš—ñ‚Í: ");
    reverseString(str);
    
    return 0;
}