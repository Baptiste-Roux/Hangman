/*
** EPITECH PROJECT, 2019
** duostumper
** File description:
** duostumper
*/

#include "include/my.h"

void check_file(hangman_t *hangman, int i)
{
    for (int j = 0; hangman->array[i][j]; j += 1) {
        if (hangman->array[i][j] == ' ' || hangman->array[i][j] == '\t')
            exit(84);
    }
}

void get_input(hangman_t *hangman)
{
    int x = 0;
    size_t bufsize = 32;
    char *buffer = my_calloc(bufsize, 1);

    printf("Your letter: ");
    x = getline(&buffer, &bufsize, stdin);
    if (x == -1) {
        free_function(hangman);
        free(buffer);
        exit(84);
    }
    if (my_strlen(buffer) > 2) {
        hangman->guess -= 1;
        hangman->input += 1;
        printf("You have to put only one letter\n");
        printf("%s\n", hangman->hidden_word);
        printf("Tries: %d\n\n", hangman->guess);
    }
    hangman->carac = buffer[0];
    free(buffer);
}

void begin(hangman_t *hangman)
{
    printf("%s\n", hangman->hidden_word);
    printf("Tries: %d\n\n", hangman->guess);
}

void prepare_game(hangman_t *hangman)
{
    for (int i = 0; hangman->array[i]; i += 1)
        check_file(hangman, i);
    pick_word(hangman);
    begin(hangman);
    while (1) {
        hangman->input = 0;
        victory(hangman);
        loose(hangman);
        get_input(hangman);
        if (my_char_present(hangman->carac, hangman->pick) == -1 \
            && hangman->input == 0)
            wrong_letter(hangman);
        else if (my_char_present(hangman->carac, hangman->pick) != -1 \
                && hangman->input == 0) {
            print_word(hangman);
            printf("Tries: %d\n\n", hangman->guess);
        }
    }
}

