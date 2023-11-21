/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** right.c
*/

#include "sokoban.h"

int right(int key, soko *f)
{
    if (key == 67) {
        if (f->d == 1 || f->d == 3) {
            f->file[f->x] = ' ';
            f->x += 1;
            f->file[f->x] = 'P';
            return (1);
        }
    }
    return (0);
}
