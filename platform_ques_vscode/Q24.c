#include <stdio.h>

int main(void) {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int maximum = -1;
    for (int i = 0; i < rows; i++) {
        int rowTotal = 0;
        for (int j = 0; j < columns; j++) {
            int value;
            scanf("%d", &value);
            rowTotal += value;
        }
        if (i == 0 || rowTotal > maximum)
            maximum = rowTotal;
    }

    printf("%d\n", maximum);
    return 0;
}
