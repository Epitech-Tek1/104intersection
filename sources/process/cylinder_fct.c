/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** cylinder_fct
*/

#include "main/main.h"

static double get_ptn_f(vector3f way)
{
    return (pow(way.x, 2) + pow(way.y, 2));
}

static double get_ptn_s(vector3f col, vector3f way)
{
    return ((2 * col.x * way.x) + (2 * col.y * way.y));
}

static double get_ptn_t(vector3f col, double rad)
{
    return (pow(col.x, 2) + pow(col.y, 2) - pow(rad, 2));
}

static double discriminant(colision *colision)
{
    return (pow(colision->ptn_s, 2) - (4 * colision->ptn_f * colision->ptn_t));
}

void cylinder_fct(colision *colision, char **av)
{
    printf("Cylinder of radius %d\n", my_atoi(av[8]));
    colision->ptn_f = (get_ptn_f(colision->way));
    colision->ptn_s = (get_ptn_s(colision->col, colision->way));
    colision->ptn_t = (get_ptn_t(colision->col, colision->rad));
    colision->delta = (discriminant(colision));
    do_process(colision);
}