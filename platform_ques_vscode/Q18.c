#include <stdio.h>
#include <string.h>

int main(void) {
    char haystack[1000], needle[1000];
    fgets(haystack, sizeof(haystack), stdin);
    fgets(needle, sizeof(needle), stdin);

    haystack[strcspn(haystack, "\r\n")] = '\0';
    needle[strcspn(needle, "\r\n")] = '\0';

    char *position = strstr(haystack, needle);
    if (position == NULL)
        printf("-1\n");
    else
        printf("%ld\n", position - haystack);
    return 0;
}
