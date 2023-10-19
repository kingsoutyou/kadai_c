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

    printf("�ō��_: %d\n", hi);
    printf("�Œ�_: %d\n", low);
    printf("���v�_: %d\n", total);
    printf("���ϓ_: %.2f\n", averageScore);
    return 0;
}