/*現在サーバー運営を、三人の仲間とやっているので、
収入が出た際に、月ごとの収益を入力するだけで、
分配と、プール金の管理ができないかと思い作ってみました。
うまくできませんでした*/
//１２か月分、繰越金はためていくものとする
//yと入力すると、現在の繰越金の合計を表示する
//ひと月の収益の１０％は繰越金にする

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
    *carryover = (*payment) / 10; // ひと月の収益の10%を繰越金にする
}

void showpayment(int payment) {
    printf("1人当たり%d円です。\n", payment);
}

int main(void) {
    int total_carryover = 0;
    for (int month = 1; month <= 12; month++) {
        printf("%d月の一か月の総額を入力してください: ", month);
        int amount = iscanf();
        int people = 3;

        int payment, carryover;
        calcpayment(amount, people, &payment, &carryover);

        showpayment(payment);

        total_carryover += carryover;

        printf("繰越金は%d円です。次回に上乗せされます。\n", carryover);

        char response;
        printf("現在の繰越金 (y/n)");
        scanf(" %c", &response);
        if (response == 'y' || response == 'Y') {
            printf("現在の総繰越金の合計は%d円です。\n", total_carryover);
        }
    }

    return 0;
}