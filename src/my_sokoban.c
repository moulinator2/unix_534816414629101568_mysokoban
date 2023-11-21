/*
** EPITECH PROJECT, 2022
** SOKOBAN
** File description:
** Alexandre De Angelis
*/

#include "sokoban.h"

static int read_file(soko *f, char *src)
{
    struct stat i;
    int size = 0, test = 0;
    int fd = open(src, O_RDONLY);
    stat(src, &i);
    size = i.st_size;
    f->file = malloc(sizeof(char) * (size + 1));
    test = read(fd, f->file, size);
    if (test <= -1) return (f->init += 84);
    return (0);
}

static int map_file(soko *f, char *src)
{
    read_file(f, src);
    if (f->file == NULL) return (f->init += 84);
    f->err = malloc(sizeof(int) * 100);
    if (f->err == NULL) return (f->init += 84);
    f->box = malloc(sizeof(int) * 100);
    if (f->box == NULL) return (f->init += 84);
    f->emp = malloc(sizeof(int) * 100);
    if (f->emp == NULL) return (f->init += 84);
    f->nbline = malloc(sizeof(int) * 1000);
    if (f->nbline == NULL) return (f->init += 84);
    return (0);
}

static int test_argv(int argc, soko *f)
{
    f->init = 0;

    if (argc > 2) return (f->init += 84);
    if (argc == 1) return (f->init += 84);
    return (0);
}

static int help(int argc, char *argv, soko *f)
{
    if (argc == 2) {
        if (argv[0] == '-' && argv[1] == 'h') {
            my_putstr("USAGE\n");
            my_putstr("    ./my_sokoban map\n");
            my_putstr("DESCRIPTION\n");
            my_putstr("    map file representing the warehouse map, ");
            my_putstr("containing '#’ for walls,\n");
            my_putstr("    'P’ for the player, 'X’ for boxes and 'O’ ");
            my_putstr("for storage locations.\n");
            return (f->init += 1);
        }
    }
    return (0);
}

int main (int argc, char **argv)
{
    soko f;
    test_argv(argc, &f);
    map_file(&f, argv[1]);
    help(argc, argv[1], &f);
    if (f.init == 1) return (0);
    if (f.init >= 84) return (84);
    f.F = 0;
    emp_f(&f);
    disp_all(&f);
    free(f.nbline);
    free(f.file);
    free(f.err);
    return (0);
}
