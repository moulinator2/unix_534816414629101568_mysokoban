/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** line.c
*/

#include "sokoban.h"

int line(char *file, soko *f)
{
    int c = 0, e = 1;
    f->nbline[0] = 0;

    while (file[c] != '\0') {
        if (file[c] == '\n') {
            f->nbline[e] = (c + 1);
            e++;
        }
        c++;
    }
    return (0);
}
