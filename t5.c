#include <stdio.h>

int main() {
    int scores[] = {92, 88, 85, 98, 100};
    int inumi = sizeof(scores) / sizeof(scores[0]);
    int hi = scores[0];
    int low = scores[0];
    int total = scores[0];

    for (int i = 1; i < inumi; i++) {
        if (scores[i] > hi) {
            hi = scores[i];
        }
        if (scores[i] < low) {
            low = scores[i];
        }
        total += scores[i];
    }

    double averageScore = (double)total / inumi;

    printf("最高点: %d\n", hi);
    printf("最低点: %d\n", low);
    printf("合計点: %d\n", total);
    printf("平均点: %.2f\n", averageScore);
    return 0;
}