#include <stdio.h>
#include <string.h>

int main(void) {
    char text[1000];
    scanf("%999s", text);

    int length = (int)strlen(text);
    for (int i = 0; i < length;) {
        char current = text[i];
        int count = 1;
        i++;
        while (i < length && text[i] == current) {
            count++;
            i++;
        }
        printf("%c%d", current, count);
    }
    printf("\n");
    return 0;
}
