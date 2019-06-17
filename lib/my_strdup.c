/*
** EPITECH PROJECT, 2019
** llosa.romain@epitech.eu
** File description:
** my_strdup
*/

#include "include/lib.h"

char *my_strdup(char *str)
{
    char *copy = my_calloc(my_strlen(str), 1);

    my_strcpy(copy, str);
    return (copy);
}
