#include <stdio.h>

int main(void)
{
    int score;

    printf("‚ ‚È‚½‚Ì¬Ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B ");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("‚ ‚È‚½‚Ì¬Ñ‚Í—D‚Å‚·\n");
    }
    else if (score >= 60)
    {
        printf("‚ ‚È‚½‚Ì¬Ñ‚Í—Ç‚Å‚·\n");
    }
    else
    {
        printf("‚ ‚È‚½‚Ì¬Ñ‚Í‰Â‚Å‚·\n");
    }

    return 0;
}
