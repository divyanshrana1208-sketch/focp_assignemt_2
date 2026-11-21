#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int first[1000], second[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &first[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &second[i]);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (first[i] < second[j])
            printf("%d ", first[i++]);
        else
            printf("%d ", second[j++]);
    }
    while (i < n)
        printf("%d ", first[i++]);
    while (j < m)
        printf("%d ", second[j++]);

    printf("\n");
    return 0;
}
