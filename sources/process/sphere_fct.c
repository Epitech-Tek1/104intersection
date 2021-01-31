/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** sphere_fct
*/

#include "main/main.h"

void sphere_fct(colision *colision, char **av)
{
    printf("Shpere of radius %d\n", my_atoi(av[8]));
    colision->ptn_f = (pow(atof(av[5]), 2) + pow(atof(av[6]), 2) + pow(atof(av[7]), 2));
    colision->ptn_s = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) + (2 * atof(av[4]) * atof(av[7]));
    colision->ptn_t = (pow(atof(av[2]), 2) + pow(atof(av[3]), 2) + pow(atof(av[4]), 2) - pow(atof(av[8]), 2));
    colision->delta = pow(colision->ptn_s, 2) - (4 * colision->ptn_f * colision->ptn_t);
    do_process(colision);
}