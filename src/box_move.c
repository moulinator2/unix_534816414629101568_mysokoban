/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** box_move.c
*/

#include "sokoban.h"


static int up_b(int key, soko *f)
{
    int res = move_up_box(f);
    if (key == 65) {
        if (f->val != 1 && f->val != 3) return (0);
        f->file[f->x] = ' ';
        f->H -= f->len + 1;
        f->file[f->H] = 'P';
        if (res == 1) f->H -= f->len + 1;
        if (res == 2) f->H -= f->len2 + 1;
        f->file[f->H] = 'X';
        return (1);
    }
    return (0);
}

static int down_b(int key, soko *f)
{
    int res = move_down_box(f);
    if (key == 66) {
        if (f->val != 1 && f->val != 3) return (0);
        f->file[f->x] = ' ';
        f->B += f->test + 1;
        f->file[f->B] = 'P';
        if (res == 1) f->B += f->len + 1;
        if (res == 2) f->B += f->len + 1;
        f->file[f->B] = 'X';
        return (1);
    }
    return (0);
}

static int left_b(int key, soko *f)
{
    int res = 0;
    if (key == 68) {
        res = cond((f->x - 2), f);
        if (res == 1) return (0);
        f->file[f->x] = ' ';
        f->x -= 1;
        f->file[f->x] = 'P';
        f->file[f->x - 1] = 'X';
        return (1);
    }
    return (0);
}

static int right_b(int key, soko *f)
{
    int res = 0;
    if (key == 67) {
        res = cond((f->x + 2), f);
        if (res == 1) return (0);
        f->file[f->x] = ' ';
        f->x += 1;
        f->file[f->x] = 'P';
        f->file[f->x + 1] = 'X';
        return (1);
    }
    return (0);
}

int box_move(int key, soko *f)
{
    f->test = maplen(f->nbline[f->y], f->file, f);
    f->maplen = maplen(f->nbline[f->y], f->file, f);
    f->H = f->x;
    f->B = f->x;
    move_up(f, 1);
    move_down(f, 1);

    if (f->d == 5) right_b(key, f);
    if (f->g == 5) left_b(key, f);
    if (f->h == 5) up_b(key, f);
    if (f->b == 5) down_b(key, f);
    return (0);
}
