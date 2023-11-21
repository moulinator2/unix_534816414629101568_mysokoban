/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** cond.c
*/

#include "sokoban.h"

int cond(int index, soko *f)
{
    int res = info(index, f);
    if (res == 2 || res == 5)
        return (1);
    return (0);
}
