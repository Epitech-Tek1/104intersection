/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_


////////////////////////////////////////////////////////////
/// \brief Init all variables
///
/// \param colision Struct contains programm's informations
/// \param ac nomber of argument
/// \param av string contains arguments
///
/// \return 84 if an error occured. else return 0
////////////////////////////////////////////////////////////
int initialisation(colision *colision, int ac, char **av);

////////////////////////////////////////////////////////////
/// \brief Verif all informations are correct
///
/// \param colision Struct contains programm's informations
/// \param ac nomber of argument
/// \param av string contains arguments
///
/// \return 84 if an error occured. else return 0
////////////////////////////////////////////////////////////
int error_handling(colision *colision, int ac, char **av);

////////////////////////////////////////////////////////////
/// \brief Main of programm
///
/// \param colision Struct contains program's informations
/// \param av Arguments
///
/// \return void
////////////////////////////////////////////////////////////
void intersection(colision *colision, char **av);

////////////////////////////////////////////////////////////
/// \brief Process algo if it's a sphere
///
/// \param colision Struct contains program's informations
///
/// \return void
////////////////////////////////////////////////////////////
void sphere_fct(colision *colision, char **av);

////////////////////////////////////////////////////////////
/// \brief Process algo if it's a cylinder
///
/// \param colision Struct contains program's informations
///
/// \return void
////////////////////////////////////////////////////////////
void cylinder_fct(colision *colision, char **av);

////////////////////////////////////////////////////////////
/// \brief Process algo if it's a cone
///
/// \param colision Struct contains program's informations
///
/// \return void
////////////////////////////////////////////////////////////
void cone_fct(colision *colision, char **av);

////////////////////////////////////////////////////////////
/// \brief Process algo to calcul
///
/// \param colision Struct contains program's informations
///
/// \return int
////////////////////////////////////////////////////////////
int do_process(colision *colision);

////////////////////////////////////////////////////////////
/// \brief Get coordinate
///
/// \param colision Struct contains program's informations
/// \param av1 first value >> av[1]
/// \param av2 second value >> av[2]
/// \param av3 third value >> av[3]
///
/// \return void
////////////////////////////////////////////////////////////
vector3f coordinate(vector3f coord, double coo1, double coo2, double coo3);

////////////////////////////////////////////////////////////
/// \brief Display results
///
/// \param colision Struct contains program's informations
/// \param av Arguments
///
/// \return void
////////////////////////////////////////////////////////////
void display(colision *colision, char **av);

#endif /* !FUNCTION_H_ */