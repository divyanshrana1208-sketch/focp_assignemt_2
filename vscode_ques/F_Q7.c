#include <stdio.h>

int piecewise(int x) {
    if (x < 0) {
        return x * x + 2 * x + 1;
    }
    if (x < 10) {
        return 3 * x + 2;
    }
    return 5 * x - 7;
}

int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d\n", piecewise(x));
    return 0;
}
