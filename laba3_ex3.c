#include <stdio.h>

int main() {
    char word[100];
    char *p;
    int vowels = 0, consonants = 0;

printf("Введите слово: ");
scanf("%s", word);

    p = word;

while (*p != '\0') {
    if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u') {
    vowels++;
    } else {
    consonants++;
    }
    p++;
}

printf("Количество гласных: %d\n", vowels);
printf("Количество согласных: %d\n", consonants);

return 0;
}