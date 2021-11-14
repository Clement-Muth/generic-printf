/*
** EPITECH PROJECT, 2021
** printf
** File description:
** strlen
*/

#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(register char const *restrict string)
{
    int i = 0;

    if (!string) return 0;
    for (i = 0; string[i]; i++);
    return (i);
}