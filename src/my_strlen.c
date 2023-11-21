/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** Alexandre De Angelis
*/

#include "sokoban.h"

int my_strlen(char const *str)
{
    int test;
    test = 0;

    while (str[test] != '\0') {
        test++;
    }
    return (test);
}
