/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** loop.c
*/

#include "../include/potter_header.h"

int is_click(window_t *window)
{
    if (window->event.type == sfEvtMouseButtonReleased &&
    window->event.mouseButton.button == sfMouseLeft)
        return 1;
    return 0;
}

void loop_game(void)
{
    window_t *window = malloc(sizeof(window_t));
    window->win = create_window_fullscreen(1920, 1080);
    menu_t *menu = init_menu();
    func_ptr *ptr_event = init_event_ptr();
    func_ptr *ptr_draw = init_event_draw();
    window->status = 0;

    while (sfRenderWindow_isOpen(window->win)) {
        while (sfRenderWindow_pollEvent(window->win, &window->event)) {
            (window->event.type == sfEvtClosed) ?
            sfRenderWindow_close(window->win) : 0;
            ptr_event[window->status](menu, window);
    }
        sfRenderWindow_clear(window->win, sfBlack);
        ptr_draw[window->status](menu, window);
        sfRenderWindow_display(window->win);
    }
}
