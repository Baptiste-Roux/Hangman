/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** int_nb
*/

#include "include/lib.h"

int nb_length(int nb)
{
    int i = 0;

    while (nb != 0) {
        nb = nb / 10;
        i++;
    }
    return (i);
}
