#include <stdio.h>

int main(void) {
    int n, target;
    scanf("%d %d", &n, &target);

    int values[1000];
    for (int i = 0; i < n && i < 1000; i++) {
        scanf("%d", &values[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[i] + values[j] == target) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
