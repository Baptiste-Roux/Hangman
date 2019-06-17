/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** lib
*/

#ifndef __LIB__
#define __LIB__

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


void my_strcpy(char *dest, char *src);
int my_strcmp(char *str1, char *str2);
int my_str_is_present(char *str, char *comparator);
int power(int nb, int p);
int char_find(char tofind, char *finder);
int my_char_present(char c, char *str);
void free_array(char **array);
int nb_length(int nb);
int my_strlen(char *str);
long my_getnbr(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcat(char *dest, char const *src);
void *my_calloc(int nb, int size);
int my_strcmp(char *str1, char *str2);
char **str_to_array(char *str, char param);
char *my_strdup(char *str);

#endif /* __LIB__ */
