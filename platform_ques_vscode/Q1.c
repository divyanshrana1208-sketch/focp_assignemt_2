#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    if (d > maximum) maximum = d;

    printf("%d\n", maximum);
    return 0;
}
