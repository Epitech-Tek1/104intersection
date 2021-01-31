/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** cone_fct
*/

#include "main/main.h"

void cone_fct(colision *colision, char **av)
{
    printf("Cone with a %d degree angle\n", my_atoi(av[8]));
    colision->angle = (colision->rad * M_PI) / 180;
    colision->ptn_f = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) - pow(atof(av[7]) * tan(colision->angle), 2);
    colision->ptn_s = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) - (2 * atof(av[4]) * atof(av[7]) * pow(tan(colision->angle), 2));
    colision->ptn_t = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - (pow(atof(av[4]), 2) * pow(tan(colision->angle), 2));
    colision->delta = pow(colision->ptn_s, 2) - (4 * colision->ptn_f * colision->ptn_t);
    do_process(colision);
}