/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** draw_exit.c
*/

#include "../include/potter_header.h"

void click_on_exit(menu_t *menu, window_t *window)
{
    if (is_click_text(window, menu->exit.text)) {
        sfRenderWindow_close(window->win);
    }

    return;
}
