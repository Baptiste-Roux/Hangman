/*
** EPITECH PROJECT, 2019
** duostumper
** File description:
** duostumper
*/

#include "include/my.h"

void wrong_letter(hangman_t *hangman)
{
    printf("%c: is not in this word\n", hangman->carac);
    hangman->guess -= 1;
    printf("%s\n", hangman->hidden_word);
    printf("Tries: %d\n\n", hangman->guess);
}

void free_function(hangman_t *hangman)
{
    free_array(hangman->array);
    free(hangman->pick);
    free(hangman->hidden_word);
    free(hangman);
}

void loose(hangman_t *hangman)
{
    if (hangman->guess == 0) {
        printf("You lost!\n");
        free_function(hangman);
        exit(0);
    }
}

void victory(hangman_t *hangman)
{
    if (my_char_present('*', hangman->hidden_word) == -1) {
        printf("Congratulations!\n");
        free_function(hangman);
        exit(0);
    }
}
