/*
** EPITECH PROJECT, 2022
** bootstrap
** File description:
** detect.c
*/

#include "sokoban.h"

static void replace_emp(soko *f)
{
    int c = 0;
    while (c < f->e) {
        if (f->file[f->emp[c]] != 'P' && f->file[f->emp[c]] != 'X') {
            f->file[f->emp[c]] = 'O';
        }
        c++;
    }
}

static int verif_box(soko *f)
{
    int c = 0, res = 0;

    while (c < f->bx) {
        res += test_box(c, f);
        c++;
    }
    if (res == (f->bx * 2)) {
        f->F = 1;
        return (0);
    }
    return (0);
}

static int box_f(soko *f)
{
    int c = 0, e = 0;

    while (f->file[c] != '\0') {
        if (f->file[c] == 'X') {
            f->box[e] = c;
            e++;
        }
        c++;
    }
    f->bx = e;
    return (0);
}

static int w_line(soko *f)
{
    int c = 0, e = 0;

    while (f->file[c] != 'P' && f->file[c] != '\0') {
        if (f->file[c] == '\n') {
            e++;
        }
        c++;
    }
    return (e);
}

int detect(soko *f)
{
    int c = 0;
    replace_emp(f);

    while (f->file[c] != '\0') {
        if (f->file[c] == 'P') {
            f->x = c;
            break;
        }
        c++;
    }
    f->y = w_line(f);
    box_f(f);
    f->F = win(f);
    verif_box(f);
    return (0);
}
