#include <stdio.h>

int main(void) {
    int rows, columns, target;
    scanf("%d %d", &rows, &columns);

    int matrix[100][100];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &matrix[i][j]);
    scanf("%d", &target);

    int row = 0, column = columns - 1;
    while (row < rows && column >= 0) {
        if (matrix[row][column] == target) {
            printf("1\n");
            return 0;
        }
        if (matrix[row][column] > target)
            column--;
        else
            row++;
    }

    printf("0\n");
    return 0;
}
