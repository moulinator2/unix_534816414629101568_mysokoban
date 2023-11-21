/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** pos.c
*/

#include "sokoban.h"

int pos(int index, soko *f)
{
    int c = index;
    f->maplen = maplen(f->nbline[f->y], f->file, f);
    f->d = 0;
    f->g = 0;
    f->h = 0;
    f->b = 0;

    f->d = info((c + 1), f);
    f->g = info((c - 1), f);
    return (0);
}
