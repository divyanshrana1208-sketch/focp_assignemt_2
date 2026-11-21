#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                printf("1\n");
                return 0;
            }
        }
    }

    printf("0\n");
    return 0;
}
