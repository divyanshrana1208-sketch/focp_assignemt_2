#include <stdio.h>

int main(void) {
    int n, positions;
    scanf("%d %d", &n, &positions);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    positions %= n;
    for (int i = positions; i < n; i++)
        printf("%d ", numbers[i]);
    for (int i = 0; i < positions; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
