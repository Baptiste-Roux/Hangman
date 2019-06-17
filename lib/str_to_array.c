/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** my_str_to_word_array
*/

#include "include/lib.h"
#include <stdio.h>

void *my_calloc(int nb, int size);

char *cpyo(char *str, int i, int j)
{
    char *str1 = my_calloc(i - j, sizeof(char));

    for (int a = 0; j < i; j++, a++) {
        str1[a] = str[j];
    }
    return (str1);
}

int separa(char *str, char param)
{
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == param)
            x++;
    }
    return (x);
}

int lenghtt(char *str)
{
    int q = 0;
    while (str[q] != '\0')
        q++;
    q = q + 1;
    return (q);
}

char **str_to_array(char *str, char param)
{
    char **av;
    int j = 0;
    int x = separa(str, param);
    int a = 0;

    av = my_calloc(x + 1, sizeof(char *));
    for (int i = 0; i < lenghtt(str); i++) {
        if (str[i] == param || str[i] == '\0') {
            av[a] = cpyo(str, i, j);
            i++;
            j = i;
            a++;
        }
    }
    av[a] = NULL;
    return (av);
}
