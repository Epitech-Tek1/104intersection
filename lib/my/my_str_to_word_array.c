/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** my_strstrdup
*/

#include "include/my.h"

static int nbr_line(char **tab, int i)
{
    return (!tab[i]) ? (i) : nbr_line(tab, i + 1);
}

static struct
{
    int i, j, k;
} inc;

char **my_str_to_word_array(char **tab)
{
    char **dest = malloc(sizeof(char *) * nbr_line(tab, 0));

    for (int i = 0; tab[i]; ++i)
        dest[i] = malloc(sizeof(char) * my_strlen(tab[i]) + 1);
}

int main(int ac, char **av)
{
    char **tab = my_str_to_word_array(av);

    return (0);
}