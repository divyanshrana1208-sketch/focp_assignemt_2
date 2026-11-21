#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    for (int i = n - 1; i >= 0; i--) {
        if (i != n - 1)
            printf(" ");
        printf("%d", numbers[i]);
    }
    printf("\n");
    return 0;
}
