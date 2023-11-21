/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** info.c
*/

#include "sokoban.h"

int info(int index, soko *f)
{
    int c = index;
    f->H = f->x;
    switch (f->file[c]) {
        case ' ': return (1);
        case '#': return (2);
        case 'O': return (3);
        case 'P': return (4);
        case 'X': return (5);
        default:
            return (f->init += 84);
            break;
    }
}
