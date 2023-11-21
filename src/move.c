/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** move.c
*/

#include "sokoban.h"

int move_p(int key, soko *f)
{
    int res = 0;
    f->maplen = maplen(f->nbline[f->y], f->file, f);

    res = right(key, f);
    if (res == 1) return (0);
    res = left(key, f);
    if (res == 1) return (0);
    res = down(key, f);
    if (res == 1) return (0);
    up_p(key, f);

    return (0);
}
