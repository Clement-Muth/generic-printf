/*
** EPITECH PROJECT, 2021
** printf
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>
#include "includes/print.h"

typedef struct number {
    int value;
} number;

int main(void)
{
    char *string = my_strdup("hola todo");
    const float f = 0.231;
    const double d = 0.231;
    const long long int li = (sizeof(int) * sizeof(u_int16_t)) + 1; // 4 + 4 + 1
    number numb = { .value = 98765 };
    void *pointer = malloc(sizeof (number));

    my_printf("bonjour");
    my_printf(4);
    my_printf(string);
    my_printf(my_strlen("Bonjour à tous"));
    my_printf(f);
    my_printf(d);
    my_printf(li);
    my_printf(numb.value);
    my_printf(pointer);
}