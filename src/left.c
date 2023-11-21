/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** left.c
*/

#include "sokoban.h"

int left(int key, soko *f)
{
    if (key == 68) {
        if (f->g == 1 || f->g == 3) {
            f->file[f->x] = ' ';
            f->x -= 1;
            f->file[f->x] = 'P';
            return (1);
        }
    }
    return (0);
}
