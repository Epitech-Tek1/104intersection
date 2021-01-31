/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** do_process
*/

#include "main/main.h"

static vector3f get_coord(vector3f in, double coo1, double coo2, double coo3)
{
    in.x = coo1;
    in.y = coo2;
    in.z = coo3;
    return (in);
}

static void one_root(colision *colision)
{
    colision->inter1 = get_coord(colision->inter1, colision->col.x + (
    x0 * colision->way.x), colision->col.y + (x0 *
    colision->way.y), colision->col.z + (x0 * colision->way.z));
}

static void two_root(colision *colision)
{
    colision->inter1 = get_coord(colision->inter1, colision->col.x + (
    x1 * colision->way.x), colision->col.y + (x1 *
    colision->way.y), colision->col.z + (x1 * colision->way.z));
    colision->inter2 = get_coord(colision->inter2, colision->col.x + (
    x2 * colision->way.x), colision->col.y + (x2 *
    colision->way.y), colision->col.z + (x2 * colision->way.z));
}

static void (*process_fct[])(colision *colision) = {
    one_root,
    two_root
};

int do_process(colision *colision)
{
    colision->len = (0 == colision->delta) ? 1 : (0 > colision->delta) ? 0 : 2;
    if (colision->len == 1)
        (*process_fct[0])(colision);
    else if (colision->len == 2)
        (*process_fct[1])(colision);
    return (EXIT_SUCCESS);
}