/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** my_calloc
*/

#include "include/lib.h"

void *my_calloc(int nb, int size)
{
    char *str = NULL;

    if (size == 1) {
        str = malloc(sizeof(char) * (nb + 1));
        str[nb] = '\0';
    } else if (size == 8) {
        str = malloc(sizeof(char *) * (nb + 1));
        str[nb] = '\0';
    } else
        str = malloc(sizeof(int) * nb);
    for (int i = 0; i < nb; i++)
        str[i] = '\0';
    return (str);
}
