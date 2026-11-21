#include <stdio.h>

int countDigits(int number) {
    if (number == 0)
        return 1;
    if (number < 0)
        number = -number;

    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int numbers[1000], answer = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        int digits = countDigits(numbers[i]);
        if (digits % 2 == 0)
            answer++;
    }

    printf("%d\n", answer);
    return 0;
}
