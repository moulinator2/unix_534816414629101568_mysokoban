/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** up_p.c
*/

#include "sokoban.h"

int move_up_box(soko *f)
{
    f->len = 0, f->len2 = 0, f->val = 0;
    f->len = maplen(f->nbline[f->y - 1], f->file, f);
    f->len2 = maplen(f->nbline[f->y - 2], f->file, f);
    int tmp = f->x;
    if (f->len2 == f->len) {
        tmp -= (f->len * 2) + 2;
        f->val = info(tmp, f);
        return (1);
    }
    if (f->len2 < f->len || f->len2 > f->len) {
        tmp -= f->test + 1;
        tmp -= f->len2 + 1;
        f->val = info(tmp, f);
        return (2);
    }
    return (0);
}

int move_up(soko *f, int e)
{
    int len = maplen((f->nbline[f->y - e]), f->file, f);
    if (len >= f->maplen) {
        f->h = info(f->x - (f->maplen + 1), f);
        return (f->maplen);
    }
    if (len < f->maplen) {
        f->h = info(f->x - (f->maplen + (len - 2)), f);
        return (f->maplen + len);
    }
    return (0);
}

int up_p(int key, soko *f)
{
    int res = move_up(f, 1);
    if (key == 65) {
        if (f->h == 1 || f->h == 3) {
            f->file[f->x] = ' ';
            f->x -= (res + 1);
            f->file[f->x] = 'P';
            return (1);
        }
    }
    return (0);
}
