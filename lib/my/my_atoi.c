/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Convert a string to an integer
*/

#include "include/my.h"

int my_atoi(char *str)
{
    int pow = my_strlen(str) - 1;
    int nb = 0;

    for (int i = 0; str[i]; ++i) {
        nb += (str[i] - '0') * my_pow(10, pow);
        --pow;
    }
    return (nb);
}