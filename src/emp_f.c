/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-alexandre.de-angelis
** File description:
** emp_f.c
*/

#include "sokoban.h"

int emp_f(soko *f)
{
    int c = 0, e = 0;

    while (f->file[c] != '\0') {
        if (f->file[c] == 'O') {
            f->emp[e] = c;
            e++;
        }
        c++;
    }
    f->e = e;
    return (0);
}
