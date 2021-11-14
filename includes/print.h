/*
** EPITECH PROJECT, 2021
** printf
** File description:
** printf
*/

#pragma once

#include <stdbool.h>
#include <stdio.h>
#include "utils.h"

#define printf_dec_format(x) _Generic((x), \
    char: "%c\n", \
    bool: "%d\n", \
    signed char: "%hhd\n", \
    unsigned char: "%hhu\n", \
    signed short: "%hd\n", \
    unsigned short: "%hu\n", \
    signed int: "%d\n", \
    unsigned int: "%u\n", \
    long int: "%ld\n", \
    unsigned long int: "%lu\n", \
    long long int: "%lld\n", \
    unsigned long long int: "%llu\n", \
    float: "%f\n", \
    double: "%f\n", \
    long double: "%Lf\n", \
    char *: "%s\n", \
    void *: "%p\n")

#define _print(x) printf(printf_dec_format(x), x)

#define my_printf(x, ...) _print(x)
