#include <stdio.h>

int reverseNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main(void) {
    int start, end, divisor;

    scanf("%d %d %d", &start, &end, &divisor);

    int count = 0;
    for (int day = start; day <= end; day++) {
        int difference = day - reverseNumber(day);
        if (difference < 0)
            difference = -difference;
        if (difference % divisor == 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
