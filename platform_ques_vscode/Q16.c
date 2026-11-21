#include <stdio.h>

int main(void) {
    char character;
    char word[100];
    char sentence[1000];

    scanf(" %c", &character);
    scanf("%s", word);
    scanf(" ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", character);
    printf("%s\n", word);
    printf("%s", sentence);
    return 0;
}
