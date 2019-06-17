/*
** EPITECH PROJECT, 2019
** project
** File description:
** llosa.romain@epitech.eu
*/

#include "include/lib.h"

int my_strcmp(char *str1, char *str2)
{
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return (1);
        }
    }
    return (0);
}
