/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** llosa.romain@epitech.eu
*/

#include "include/lib.h"

long my_getnbr(char *str)
{
    int i = 0;
    int a = 1;
    long res = 0;

    for (; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            a = a * -1;
    }
    for (; str[i] > 47 && str[i] < 58; i++)
        res = res * 10 + (str[i] - 48);
    return (a * res);
}
