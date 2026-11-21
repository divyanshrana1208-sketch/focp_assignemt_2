#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    int candidate = numbers[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] == candidate)
            count++;
        else {
            count--;
            if (count == 0) {
                candidate = numbers[i];
                count = 1;
            }
        }
    }

    printf("%d\n", candidate);
    return 0;
}
