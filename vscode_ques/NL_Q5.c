#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int values[1000];
    for (int i = 0; i < n && i < 1000; i++) {
        scanf("%d", &values[i]);
    }

    int minimum = abs(values[0] - values[1]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int difference = abs(values[i] - values[j]);
            if (difference < minimum) {
                minimum = difference;
            }
        }
    }
    printf("%d\n", minimum);
    return 0;
}
