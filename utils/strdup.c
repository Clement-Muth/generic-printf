/*
** EPITECH PROJECT, 2021
** printf
** File description:
** strdup
*/

#include <stdio.h>
#include <stdlib.h>
#include "../includes/utils.h"

char *my_strdup(char const *restrict string)
{
    size_t len = my_strlen(string) + 1;
    void *new = malloc(len);

    if (!new) return NULL;
    return ((char *)my_memcpy(new, string, len));
}