/*
** EPITECH PROJECT, 2022
** SOKOBAN
** File description:
** Display all
*/

#include "sokoban.h"

int disp_all(soko *f)
{
    char c = 0;
    line(f->file, f);
    initscr();
        while (c != 113 && f->F != 1) {
            detect(f);
            printw("%s\n", f->file);
            pos(f->x, f);
            c = getch();
            box_move(c, f);
            detect(f);
            move_p(c, f);
            clear();
            refresh();
        }
    endwin();
    return (0);
}
