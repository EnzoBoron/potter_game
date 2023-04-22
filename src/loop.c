/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** loop.c
*/

#include "../include/potter_header.h"

void event_loop(window_t window)
{
    while (sfRenderWindow_pollEvent(window.win, &window.event)) {
        if (window.event.type == sfEvtClosed)
            sfRenderWindow_close(window.win);
    }
}

void loop_game(void)
{
    window_t window;
    window.win = create_window(1920, 1080);
    while (sfRenderWindow_isOpen(window.win)) {
        event_loop(window);
        sfRenderWindow_clear(window.win, sfBlack);

        sfRenderWindow_display(window.win);
    }
}
