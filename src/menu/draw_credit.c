/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** draw_credit.c
*/

#include "../include/potter_header.h"

extern sfColor gold_color;

void draw_credits(menu_t *menu, window_t *window)
{
    sfRenderWindow_drawSprite(window->win, menu->wallpaper.sprite, NULL);
    get_element *elements = malloc(sizeof(get_element));
    text_t retour = create_text("return", (sfVector2f){0, 1000}, 50, sfWhite);
    if (is_survol_text(window, retour.text))
        sfText_setColor(retour.text, gold_color);
    else
        sfText_setColor(retour.text, sfWhite);
    file_info("files/credits.txt", elements);
    text_t description = create_text(elements->contenu, (sfVector2f){0, 0}, 50, sfWhite);
    sfRenderWindow_drawText(window->win, description.text, NULL);
    sfRenderWindow_drawText(window->win, retour.text, NULL);
    if (is_click_text(window, retour.text))
        window->status = 0;
    destroye_text(retour);
    destroye_text(description);
}

void click_credit(menu_t *menu, window_t *window)
{
    if (is_click_text(window, menu->credits.text)) {
        window->status = 1;
    }
    return;
}
