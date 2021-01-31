/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** my_fill_tab
*/

#include "include/my.h"

static void integer_fct(va_list arg, double **tab)
{
    return;
}

static void double_fct(va_list arg, double **tab)
{
    static int i = 0;
    *tab[1] = va_arg(arg, double);
}

static int check_arg(char *type, double **tab, va_list arg, int i)
{
    void (*tab_fct[])(va_list, double **) = {integer_fct, integer_fct,
    double_fct};
    char flag[] = "idf";

    for (int n = 0; flag[n]; ++n) {
        if (flag[n] == type[i])
            (*tab_fct[n])(arg, tab);
    }
    return (i++);
}

int my_fill_tab(char *type, double **tab, ...)
{
    va_list(arg);
    va_start(arg, type);

    for (int i = 0; type[i]; ++i)
        if ('%' == type[i])
            i = check_arg(type, tab, arg, i + 1);
    va_end(arg);
    return (EXIT_SUCCESS);
}

int main(void)
{
    double *tab = malloc(sizeof(double) * 5);
    my_fill_tab("%f%f", &tab, 150.6, 30.0);
    printf("%f\n", tab[0]);
    free (tab);
}