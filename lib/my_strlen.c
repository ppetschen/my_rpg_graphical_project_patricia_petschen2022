/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** returns the lenght of a string
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
