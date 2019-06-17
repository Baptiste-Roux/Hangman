/*
** EPITECH PROJECT, 2019
** CPE_duostumper_5_2018
** File description:
** duostumper
*/

#include "include/my.h"

hangman_t *init(void)
{
    hangman_t *hangman = malloc(sizeof(*hangman));

    hangman->guess = 10;
    hangman->array = NULL;
    hangman->pick = NULL;
    hangman->input = 0;
    return (hangman);
}

int main(int ac, char **av)
{
    int fd = 0;
    char *str = NULL;
    hangman_t *hangman = init();
    struct stat statbuff;

    if (ac > 3)
        return (84);
    if (av[2])
        hangman->guess = my_getnbr(av[2]);
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    stat(av[1], &statbuff);
    str = my_calloc(statbuff.st_size, 1);
    read(fd, str, statbuff.st_size);
    hangman->array = str_to_array(str, '\n');
    free(str);
    prepare_game(hangman);
    close(fd);
    return (0);
}
