/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** llosa.romain@epitech.eu
*/

#include "include/lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{

    for (int i = 0; s1[i] != 0 && s2[i] != 0 && n != 0; i++, n--) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
