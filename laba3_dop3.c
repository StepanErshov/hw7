#include <stdio.h>
#include <stdlib.h>     
#include <time.h> 

#define WORD_LENGTH 5
#define ARRAY_SIZE 10000

void generate_random_word(char* word, int length) {
    for (int i = 0; i < length; i++) {
        word[i] = 'a' + rand() % 26;
        }
    word[length] = '\0';
}

void fill_array_with_random_words(char array[][WORD_LENGTH+1], int size) {
    for (int i = 0; i < size; i++) {
        generate_random_word(array[i], WORD_LENGTH);
    }
}

int main() {
    srand(time(NULL)); 

    char words[ARRAY_SIZE][WORD_LENGTH+1];

    fill_array_with_random_words(words, ARRAY_SIZE);

// Теперь массив words заполнен случайными словами длины WORD_LENGTH
// Можно использовать этот массив для тестирования сортировок из упр. 1
// Только я не знаю как(((

return 0;
}