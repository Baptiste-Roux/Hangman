/*
** EPITECH PROJECT, 2019
** my_str_is_present
** File description:
**  lib
*/

#include "include/lib.h"

int my_str_is_present(char *str, char *comparator)
{
    for (int i = 0; str[i]; i++) {
        if (my_char_present(str[i], comparator) == 0)
            return (i);
    }
    return (1);
}
