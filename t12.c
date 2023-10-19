/*Œ»İƒT[ƒo[‰^‰c‚ğAOl‚Ì’‡ŠÔ‚Æ‚â‚Á‚Ä‚¢‚é‚Ì‚ÅA
û“ü‚ªo‚½Û‚ÉAŒ‚²‚Æ‚Ìû‰v‚ğ“ü—Í‚·‚é‚¾‚¯‚ÅA
•ª”z‚ÆAƒv[ƒ‹‹à‚ÌŠÇ—‚ª‚Å‚«‚È‚¢‚©‚Æv‚¢ì‚Á‚Ä‚İ‚Ü‚µ‚½B
‚¤‚Ü‚­‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½*/
//‚P‚Q‚©Œ•ªAŒJ‰z‹à‚Í‚½‚ß‚Ä‚¢‚­‚à‚Ì‚Æ‚·‚é
//y‚Æ“ü—Í‚·‚é‚ÆAŒ»İ‚ÌŒJ‰z‹à‚Ì‡Œv‚ğ•\¦‚·‚é
//‚Ğ‚ÆŒ‚Ìû‰v‚Ì‚P‚O“‚ÍŒJ‰z‹à‚É‚·‚é

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int iscanf(void) {
    String inputStr;
    scanf("%s", inputStr);
    return atoi(inputStr);
}

void calcpayment(int dividend, int divisor, int *payment, int *carryover) {
    *payment = dividend / divisor;
    *carryover = (*payment) / 10; // ‚Ğ‚ÆŒ‚Ìû‰v‚Ì10%‚ğŒJ‰z‹à‚É‚·‚é
}

void showpayment(int payment) {
    printf("1l“–‚½‚è%d‰~‚Å‚·B\n", payment);
}

int main(void) {
    int total_carryover = 0;
    for (int month = 1; month <= 12; month++) {
        printf("%dŒ‚Ìˆê‚©Œ‚Ì‘Šz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ", month);
        int amount = iscanf();
        int people = 3;

        int payment, carryover;
        calcpayment(amount, people, &payment, &carryover);

        showpayment(payment);

        total_carryover += carryover;

        printf("ŒJ‰z‹à‚Í%d‰~‚Å‚·BŸ‰ñ‚Éãæ‚¹‚³‚ê‚Ü‚·B\n", carryover);

        char response;
        printf("Œ»İ‚ÌŒJ‰z‹à (y/n)");
        scanf(" %c", &response);
        if (response == 'y' || response == 'Y') {
            printf("Œ»İ‚Ì‘ŒJ‰z‹à‚Ì‡Œv‚Í%d‰~‚Å‚·B\n", total_carryover);
        }
    }

    return 0;
}