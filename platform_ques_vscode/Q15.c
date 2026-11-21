#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[1000];
    scanf("%s", text);

    for (int i = 0; text[i] != '\0'; i++)
        text[i] = (char)tolower((unsigned char)text[i]);

    printf("%s\n", text);
    return 0;
}
