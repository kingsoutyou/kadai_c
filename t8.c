#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        if (max != i) {
            swap(&arr[i], &arr[max]);
        }
    }
}

int main() {
    int scores[] = {48,52,58,84,75,95};
    int inumi = sizeof(scores) / sizeof(scores[0]);
    
    selectionSort(scores, inumi);

    printf("1ˆÊ‚Í %d‚Å‚·\n", scores[0]);
    printf("2ˆÊ‚Í %d‚Å‚·\n", scores[1]);

    return 0;
}
