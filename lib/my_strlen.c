/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** llosa.romain@epitech.eu
*/

#include "include/lib.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
