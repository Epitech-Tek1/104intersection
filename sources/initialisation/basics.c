/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** basics
*/

#include "main/main.h"

static int check_syntax_validity(colision *colision, char **alpha_num, int i)
{
    if (i == colision->ac)
        return (EXIT_SUCCESS);
    if (**alpha_num == my_strlen(*alpha_num))
        return (check_syntax_validity(colision, alpha_num, i + 1));
    if (!(is_alphanum(**alpha_num) AND PREG_MATCH))
        return (EXIT_PREG_MATCH);
    return (check_syntax_validity(colision, alpha_num + 1, i));
}

int error_handling(colision *colision, int ac, char **av)
{
    if ((9 != ac) AND ('1' != av[1][0] AND '2' != av[1][0] AND '3' != av[1][0]))
        return (EXIT_ERROR);
    // if (check_syntax_validity(colision, av, 0) == 84)
    //     return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}

vector3f coordinate(vector3f coord, double coo1, double coo2, double coo3)
{
    coord.x = coo1;
    coord.y = coo2;
    coord.z = coo3;
    return (coord);
}

int initialisation(colision *colision, int ac, char **av)
{
    colision->ac = ac;
    colision->op = my_atoi(av[1]);
    colision->rad = my_atof(av[8]);
    colision->col = coordinate(colision->col, my_atof(av[2]), my_atof(av[3]),
    my_atof(av[4]));
    colision->way = coordinate(colision->way, my_atof(av[5]), my_atof(av[6]),
    my_atof(av[7]));
    colision->len = 0;
    return (EXIT_SUCCESS);
}