#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int matrix[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += matrix[i][i];
        if (i != n - 1 - i)
            secondary += matrix[i][n - 1 - i];
    }

    printf("%d\n", primary + secondary);
    return 0;
}
