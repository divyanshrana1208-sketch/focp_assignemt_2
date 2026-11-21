#include <stdio.h>
#include <string.h>

int main(void) {
    char text[1000];
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\r\n")] = '\0';

    for (int i = 0; text[i] != '\0'; i++) {
        int count = 0;
        for (int j = 0; text[j] != '\0'; j++) {
            if (text[i] == text[j])
                count++;
        }
        if (count == 1) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
