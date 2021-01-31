/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** my_putstrstr
*/

#include "my.h"

void my_putstrstr(char **tab)
{
    if (!**tab)
        return;
    my_putstr(*tab);
    my_putstrstr(++tab);
}