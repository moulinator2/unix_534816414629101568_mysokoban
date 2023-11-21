/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-bssokoban-alexandre.de-angelis
** File description:
** maplen.c
*/

#include "sokoban.h"

int maplen(int line, char *file, soko *f)
{
    int c = 0;

    while (file[line] != '\n' && file[line] != '\0') {
        line++;
        c++;
    }
    f->maplen = c;
    return (c);
}
