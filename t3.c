#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 1000; i += 2) {
        sum += i;
    }
    printf("���v: %d\n", sum);
    return 0;
}
