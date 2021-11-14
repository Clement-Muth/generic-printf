/*
** EPITECH PROJECT, 2021
** printf
** File description:
** memcpy
*/

void *my_memcpy(void *dest, void const *restrict src, register int length)
{
    char *d = dest;
    const char *s = src;

    while (length--) *d++ = *s++;
    return dest;
}