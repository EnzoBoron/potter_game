/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** draw_settings.c
*/

#include "../include/potter_header.h"

extern sfColor gold_color;

int is_click_sprite_bool(window_t *window, sfSprite *sprite)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfSprite_getGlobalBounds(sprite);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue && sfMouse_isButtonPressed(sfMouseLeft))
        return 1;
    return 0;
}

void click_settings(menu_t *menu, window_t *window)
{
    if (is_survol_text(window, menu->return_settings.text))
        sfText_setColor(menu->return_settings.text, gold_color);
    else
        sfText_setColor(menu->return_settings.text, sfWhite);
    if (is_click_text(window, menu->return_settings.text))
        window->status = 0;
    if (is_click_sprite_bool(window, menu->button_barre.sprite)) {
        sfVector2i pos = sfMouse_getPositionRenderWindow(window->win);
        sfSprite_setPosition(menu->button_barre.sprite, (sfVector2f){pos.x, 500});
    }
}

void draw_settings(menu_t *menu, window_t *window)
{
    sfRenderWindow_drawSprite(window->win, menu->wallpaper.sprite, NULL);
    sfRenderWindow_drawText(window->win, menu->music_txt.text, NULL);
    sfRenderWindow_drawText(window->win, menu->fx.text, NULL);
    sfRenderWindow_drawSprite(window->win, menu->barre.sprite, NULL);
    sfRenderWindow_drawSprite(window->win, menu->barre_fx.sprite, NULL);
    sfRenderWindow_drawSprite(window->win, menu->button_barre.sprite, NULL);
    sfRenderWindow_drawSprite(window->win, menu->button_fx.sprite, NULL);
    sfRenderWindow_drawText(window->win, menu->return_settings.text, NULL);
}