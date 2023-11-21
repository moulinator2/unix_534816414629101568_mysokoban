/*
** EPITECH PROJECT, 2022
** MY_PUTSTR
** File description:
** Alexandre De Angelis
*/

#include <unistd.h>
#include "sokoban.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
