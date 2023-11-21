/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** test_box.c
*/

#include "sokoban.h"

static void err_d(int index, soko *f)
{
    int h = maplen(f->nbline[f->y - 1], f->file, f) + 1;
    int b = maplen(f->nbline[f->y + 1], f->file, f) + 1;

    f->err[0] = (index - 1);
    f->err[1] = (index + 1);
    f->err[2] = (index - h);
    f->err[3] = (index + b);
}

int test_box(int c, soko *f)
{
    int res = 0, e = 0, err = 0;

    err_d(f->box[c], f);
    while (e < 4) {
        res = cond(f->err[e], f);
        if (res == 1) err++;
        e++;
    }
    if (err == 2) return (0);
    return (err);
}
