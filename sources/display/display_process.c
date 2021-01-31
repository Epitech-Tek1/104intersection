/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** display_process
*/

#include "main/main.h"

static void display_shpere(colision *colision, char **av)
{
    double inter1 = (-colision->ptn_s / (2.0 * colision->ptn_f));

    if (0 == colision->len)
        printf("No intersection point.\n");
    else if (1 == colision->len) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + (inter1 * atof(av[5])), atof(av[3]) + (inter1 * atof(av[6])), atof(av[4]) + (inter1 * atof(av[7])));
    } else {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", colision->inter2.x, colision->inter2.y, colision->inter2.z);
        printf("(%.3f, %.3f, %.3f)\n", colision->inter1.x, colision->inter1.y, colision->inter1.z);
    }
}

static void display_cylinder(colision *colision, char **av)
{
    double inter1 = (-colision->ptn_s / (2.0 * colision->ptn_f));

    if ((colision->ptn_t) == 0) {
        printf("There is an infinite number of intersection points.\n");
        return;
    }
    if (0 == colision->len)
        printf("No intersection point.\n");
    else if (1 == colision->len) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + (inter1 * atof(av[5])), atof(av[3]) + (inter1 * atof(av[6])), atof(av[4]) + (inter1 * atof(av[7])));
    } else {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", colision->inter2.x, colision->inter2.y, colision->inter2.z);
        printf("(%.3f, %.3f, %.3f)\n", colision->inter1.x, colision->inter1.y, colision->inter1.z);
    }
}

static void display_cone(colision *colision, char **av)
{
    double inter1 = (-colision->ptn_s / (2.0 * colision->ptn_f));

    if ((int) (colision->ptn_t) * 1000000 == 0) {
        printf("There is an infinite number of intersection points.\n");
        return;
    }
    if (0 == colision->len)
        printf("No intersection point.\n");
    else if (1 == colision->len) {
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", atof(av[2]) + (inter1 * atof(av[5])), atof(av[3]) + (inter1 * atof(av[6])), atof(av[4]) + (inter1 * atof(av[7])));
    } else {
        printf("2 intersection points:\n");
        printf("(%.3f, %.3f, %.3f)\n", colision->inter2.x, colision->inter2.y, colision->inter2.z);
        printf("(%.3f, %.3f, %.3f)\n", colision->inter1.x, colision->inter1.y, colision->inter1.z);
    }
}

void (* type_fct[])(colision *colision, char **av) = {
    display_shpere,
    display_cylinder,
    display_cone
};

void display(colision *colision, char **av)
{
    printf("Line passing through the point (%.f, %.f, %.f) and parralel to the vector (%.f, %.f, %.f)\n",
    my_atof(av[2]), my_atof(av[3]), my_atof(av[4]), my_atof(av[5]), my_atof(av[6]), my_atof(av[7]));
    (type_fct[colision->op - 1])(colision, av);
}