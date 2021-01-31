/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** main
*/

#include "main/main.h"

int main(int ac, char **av)
{
    colision *colision = malloc(sizeof(colision) * (sizeof(vector3f) * 2));

    if (!colision)
        return (EXIT_ERROR);
    if ((84 == initialisation(colision, ac, av)) OR
    (84 == error_handling(colision, ac, av)))
        return (EXIT_ERROR);
    intersection(colision, av);
    free (colision);
    return (EXIT_SUCCESS);
}