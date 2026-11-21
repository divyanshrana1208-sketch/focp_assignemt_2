#include <stdio.h>

int main(void) {
    int n, value;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);
    scanf("%d", &value);

    int result = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] != value)
            numbers[result++] = numbers[i];
    }

    printf("%d\n", result);
    for (int i = 0; i < result; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
