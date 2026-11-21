#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || numbers[i] != numbers[i - 1])
            numbers[uniqueCount++] = numbers[i];
    }

    printf("%d\n", uniqueCount);
    for (int i = 0; i < uniqueCount; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
