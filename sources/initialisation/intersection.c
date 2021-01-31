/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** intersection
*/

#include "main/main.h"

static void (*process_fct[])(colision *colision, char **av) = {
    sphere_fct,
    cylinder_fct,
    cone_fct
};

void intersection(colision *colision, char **av)
{
    process_fct[colision->op - 1](colision, av);
    display(colision, av);
}