/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** puissance
*/

#include "include/lib.h"

int power(int nb, int p)
{
    long pp;

    if (p  == 0)
        return (1);
    else if (p < 0)
        return (0);
    else {
        pp = nb * power(nb, p - 1);
        return (pp);
    if ( pp > 2147483647)
        return (0);
    else
        return (pp);
    }
}
