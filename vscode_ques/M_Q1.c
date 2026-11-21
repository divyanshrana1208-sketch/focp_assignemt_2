#include <stdio.h>

int main(void) {
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[100][100];
    long long rowSum[100] = {0};
    long long columnSum[100] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
            columnSum[j] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", rowSum[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", columnSum[j]);
    }
    printf("\n");
    return 0;
}
