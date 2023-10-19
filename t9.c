#include <stdio.h>

int main() {
    int x, y, z;

    printf("3‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d %d %d", &x, &y, &z);

    int min = x;
    
    if (y < min) {
        min = y;
    }
    
    if (z < min) {
        min = z;
    }

    printf("“ü—Í‚³‚ê‚½®”‚ÌÅ¬’l: %d\n", min);

    return 0;
}