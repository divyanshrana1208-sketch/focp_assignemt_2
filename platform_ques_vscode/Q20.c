#include <stdio.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    scanf("%s %s", first, second);

    int firstCount[256] = {0};
    int secondCount[256] = {0};

    for (int i = 0; first[i] != '\0'; i++) firstCount[(unsigned char)first[i]]++;
    for (int i = 0; second[i] != '\0'; i++) secondCount[(unsigned char)second[i]]++;

    for (int i = 0; i < 256; i++) {
        if (firstCount[i] != secondCount[i]) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}
