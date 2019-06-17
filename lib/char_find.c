/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** char find
*/

#include "include/lib.h"

int char_find(char tofind, char *finder)
{
    for (int i = 0; i < my_strlen(finder); i++) {
        if (tofind == finder[i])
            return (i);
    }
    return (10);
}
