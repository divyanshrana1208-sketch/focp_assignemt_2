#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char text[1000];
    fgets(text, sizeof(text), stdin);

    int left = 0;
    int right = (int)strlen(text) - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)text[left])) left++;
        while (left < right && !isalnum((unsigned char)text[right])) right--;

        char leftChar = (char)tolower((unsigned char)text[left]);
        char rightChar = (char)tolower((unsigned char)text[right]);
        if (leftChar != rightChar) {
            printf("0\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("1\n");
    return 0;
}
