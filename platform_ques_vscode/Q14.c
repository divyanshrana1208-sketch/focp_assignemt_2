#include <stdio.h>
#include <string.h>

int main(void) {
    char text[1000];
    scanf("%s", text);

    int length = (int)strlen(text);
    for (int i = length - 1; i >= 0; i--)
        text[i] = text[i];

    for (int i = 0; i < length / 2; i++) {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    printf("%s\n", text);
    return 0;
}
