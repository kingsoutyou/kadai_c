/*���݃T�[�o�[�^�c���A�O�l�̒��ԂƂ���Ă���̂ŁA
�������o���ۂɁA�����Ƃ̎��v����͂��邾���ŁA
���z�ƁA�v�[�����̊Ǘ����ł��Ȃ����Ǝv������Ă݂܂����B
���܂��ł��܂���ł���*/
//�P�Q�������A�J�z���͂��߂Ă������̂Ƃ���
//y�Ɠ��͂���ƁA���݂̌J�z���̍��v��\������
//�Ђƌ��̎��v�̂P�O���͌J�z���ɂ���

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
    *carryover = (*payment) / 10; // �Ђƌ��̎��v��10%���J�z���ɂ���
}

void showpayment(int payment) {
    printf("1�l������%d�~�ł��B\n", payment);
}

int main(void) {
    int total_carryover = 0;
    for (int month = 1; month <= 12; month++) {
        printf("%d���̈ꂩ���̑��z����͂��Ă�������: ", month);
        int amount = iscanf();
        int people = 3;

        int payment, carryover;
        calcpayment(amount, people, &payment, &carryover);

        showpayment(payment);

        total_carryover += carryover;

        printf("�J�z����%d�~�ł��B����ɏ�悹����܂��B\n", carryover);

        char response;
        printf("���݂̌J�z�� (y/n)");
        scanf(" %c", &response);
        if (response == 'y' || response == 'Y') {
            printf("���݂̑��J�z���̍��v��%d�~�ł��B\n", total_carryover);
        }
    }

    return 0;
}