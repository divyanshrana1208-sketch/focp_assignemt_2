#include <stdio.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    scanf("%s %s", first, second);

    if (strlen(first) != strlen(second)) {
        printf("0\n");
        return 0;
    }

    char firstToSecond[256];
    char secondToFirst[256];
    memset(firstToSecond, 0, sizeof(firstToSecond));
    memset(secondToFirst, 0, sizeof(secondToFirst));

    for (int i = 0; first[i] != '\0'; i++) {
        unsigned char a = (unsigned char)first[i];
        unsigned char b = (unsigned char)second[i];
        if (firstToSecond[a] == 0)
            firstToSecond[a] = (char)b;
        if (secondToFirst[b] == 0)
            secondToFirst[b] = (char)a;

        if (firstToSecond[a] != (char)b || secondToFirst[b] != (char)a) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}
