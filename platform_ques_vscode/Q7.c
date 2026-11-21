#include <stdio.h>

int main(void) {
    int n, target;
    scanf("%d", &n);

    int numbers[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &numbers[i]);
    scanf("%d", &target);

    int low = 0, high = n;
    while (low < high) {
        int middle = low + (high - low) / 2;
        if (numbers[middle] < target)
            low = middle + 1;
        else
            high = middle;
    }

    printf("%d\n", low);
    return 0;
}
