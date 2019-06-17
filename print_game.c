/*
** EPITECH PROJECT, 2019
** print_game.c
** File description:
** print_game
*/

#include "include/my.h"
#include "lib/include/lib.h"

void pick_word(hangman_t *hangman)
{
    int i = 0;

    for (; hangman->array[i]; i++);
    hangman->pick = my_strdup(hangman->array[rand() % i]);
    hangman->hidden_word = my_calloc(my_strlen(hangman->pick), 1);
    for (int j = 0; j < my_strlen(hangman->pick); j++)
        hangman->hidden_word[j] = '*';
}

void print_word(hangman_t *hangman)
{
    for (int i = 0; hangman->pick[i]; i++) {
        if (hangman->pick[i] == hangman->carac)
            hangman->hidden_word[i] = hangman->carac;
    }
    printf("%s\n", hangman->hidden_word);
}
