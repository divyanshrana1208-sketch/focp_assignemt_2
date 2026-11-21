#include <stdio.h>

int main(void) {
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int value;
            scanf("%d", &value);
            if (value < 0)
                count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
