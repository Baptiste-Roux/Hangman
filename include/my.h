/*
** EPITECH PROJECT, 2019
** bootstrap
** File description:
** my.h
*/

#ifndef __MY__
#define __MY__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <stdio.h>
#include "../lib/include/lib.h"

typedef struct hangman_s {
    int guess;
    char **array;
    char carac;
    char *pick;
    char *hidden_word;
    int input;
}hangman_t;

void prepare_game(hangman_t *hangman);
void pick_word(hangman_t *hangman);
void print_word(hangman_t *hangman);
void loose(hangman_t *hangman);
void victory(hangman_t *hangman);
void free_function(hangman_t *hangman);
void wrong_letter(hangman_t *hangman);

#endif /* __MY__ */
