/*
** EPITECH PROJECT, 2022
** SOKOBAN
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    #include <ncurses.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct soko {
        int x;
        int y;
        int F;
        int mvb;
        int bx;
        int init;
        int count;
        int d;
        int g;
        int h;
        int b;
        int e;
        int H;
        int B;
        int test;
        int len;
        int len2;
        int val;
        int maplen;
        int *err;
        int *emp;
        int *box;
        int *nbline;
        char *file;
    } soko;

int win(soko *f);
int emp_f(soko *f);
int detect(soko *f);
int disp_all(soko *f);
int my_put_nbr(int nb);
int move_up_box(soko *f);
int move_down_box(soko *f);
int down(int key, soko *f);
int up_p(int key, soko *f);
int left(int key, soko *f);
int move_up(soko *f, int e);
int right(int key, soko *f);
int pos(int index, soko *f);
int info(int index, soko *f);
int cond(int index, soko *f);
int move_p(int key, soko *f);
int move_down(soko *f, int e);
int line(char *file, soko *f);
int box_move(int key, soko *f);
int my_putstr(char const *str);
int my_strlen(char const *str);
int test_box(int index, soko *f);
int maplen(int line, char *file, soko *f);

void my_putchar(char chara);
#endif
