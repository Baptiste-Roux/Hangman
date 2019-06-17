/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** freearray
*/

#include "include/lib.h"

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
