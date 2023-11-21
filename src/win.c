/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** win.c
*/

#include "sokoban.h"

int win(soko *f)
{
    int c = 0, w = 0;

    while (c < f->e) {
        if (f->emp[c] == f->box[c]) w++;
        c++;
    }
    if (w == f->e) return (1);
    return (0);
}
