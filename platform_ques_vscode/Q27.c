#include <stdio.h>

int main(void) {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int matrix[100][100];
    int zeroRow[100] = {0};
    int zeroColumn[100] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                zeroRow[i] = 1;
                zeroColumn[j] = 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (zeroRow[i] || zeroColumn[j])
                printf("0 ");
            else
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
