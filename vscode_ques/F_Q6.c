#include <stdio.h>

void convertSeconds(int totalSeconds, int *hours,
                    int *minutes, int *seconds) {
    *hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    *minutes = totalSeconds / 60;
    *seconds = totalSeconds % 60;
}

int main(void) {
    int totalSeconds, hours, minutes, seconds;
    scanf("%d", &totalSeconds);
    convertSeconds(totalSeconds, &hours, &minutes, &seconds);
    printf("%d %d %d\n", hours, minutes, seconds);
    return 0;
}
