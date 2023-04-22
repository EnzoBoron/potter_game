/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** init_menu.c
*/

#include "../../include/potter_header.h"

void click_menu(menu_t *menu, window_t *window)
{
    click_credit(menu, window);
    click_on_exit(menu, window);
    survol_text(window, menu);
}

void draw_title(menu_t *menu, window_t *window)
{
    sfRenderWindow_drawText(window->win, menu->play.text, NULL);
    sfRenderWindow_drawText(window->win, menu->how_to_play.text, NULL);
    sfRenderWindow_drawText(window->win, menu->settings.text, NULL);
    sfRenderWindow_drawText(window->win, menu->credits.text, NULL);
    sfRenderWindow_drawText(window->win, menu->exit.text, NULL);

    return;
}

void draw_menu(menu_t *menu, window_t *window)
{
    sfRenderWindow_drawSprite(window->win, menu->wallpaper.sprite, NULL);
    draw_title(menu, window);
}
