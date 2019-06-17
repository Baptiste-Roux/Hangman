/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** lib
*/

#include "include/lib.h"

int my_char_present(char c, char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == c)
            return (i);
    }
    return (-1);
}
