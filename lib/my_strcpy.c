/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_strcpy
*/

#include "include/lib.h"

void my_strcpy(char *dest, char *src)
{
    for (int i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
}
