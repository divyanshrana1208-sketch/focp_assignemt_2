#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[1000];
    fgets(line, sizeof(line), stdin);

    int length = (int)strlen(line);
    if (length > 0 && line[length - 1] == '\n') {
        line[length - 1] = '\0';
        length--;
    }

    int i = length - 1;
    while (i >= 0 && isspace((unsigned char)line[i])) i--;

    int count = 0;
    while (i >= 0 && !isspace((unsigned char)line[i])) {
        count++;
        i--;
    }

    printf("%d\n", count);
    return 0;
}
