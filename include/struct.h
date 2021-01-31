/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct
{
    double x, y, z;
} vector3f;

typedef struct
{
    int ac;
    int op;
    int len;
    double rad;
    double angle;
    double delta;
    double ptn_f;
    double ptn_s;
    double ptn_t;
    vector3f col;
    vector3f way;
    vector3f inter1;
    vector3f inter2;
    vector3f coord_f;
    vector3f coord_s;
} colision;


#endif /* !STRUCT_H_ */