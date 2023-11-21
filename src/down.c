/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** down.c
*/

#include "sokoban.h"

int move_down_box(soko *f)
{
    f->len = 0, f->len2 = 0, f->val = 0;
    f->test = maplen(f->nbline[f->y], f->file, f);
    f->len = maplen(f->nbline[f->y + 1], f->file, f);
    f->len2 = maplen(f->nbline[f->y + 2], f->file, f);
    int tmp = f->x;
    if (f->len2 == f->len) {
        tmp += (f->test + 1);
        tmp += f->len + 1;
        f->val = info(tmp, f);
        return (1);
    }
    if (f->len2 < f->len || f->len2 > f->len) {
        tmp += f->test + 1;
        tmp += f->len + 1;
        f->val = info(tmp, f);
        return (2);
    }
    return (0);
}

int move_down(soko *f, int e)
{
    int len = maplen((f->nbline[f->y] + e), f->file, f);
    if (len >= f->maplen) {
        f->b = info(f->x + (f->maplen + 2), f);
        return (f->maplen);
    }
    if (len < f->maplen) {
        f->b = info(f->x + (f->maplen - (len + 2)), f);
        return (f->maplen - len);
    }
    return (0);
}

int down(int key, soko *f)
{
    int res = move_down(f, 1);
    if (key == 66) {
        if (f->b == 1 || f->b == 3) {
            f->file[f->x] = ' ';
            f->x += (res + 2);
            f->file[f->x] = 'P';
            return (1);
        }
    }
    return (0);
}
