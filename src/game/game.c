/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** game.c
*/

#include "../include/potter_header.h"

void click_game(menu_t *menu, window_t *window)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        window->status = 1;
    }
}

void draw_game(menu_t *menu, window_t *window)
{

}