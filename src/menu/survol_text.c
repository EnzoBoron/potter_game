/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** survol_text.c
*/

#include "../include/potter_header.h"

sfColor gold_color = {230, 198, 27, 255};

void survol_text(window_t *window, menu_t *menu)
{
    if (is_survol_text(window, menu->play.text) == 1)
        sfText_setColor(menu->play.text, gold_color);
    else
        sfText_setColor(menu->play.text, sfWhite);
    if (is_survol_text(window, menu->how_to_play.text) == 1)
        sfText_setColor(menu->how_to_play.text, gold_color);
    else
        sfText_setColor(menu->how_to_play.text, sfWhite);
    if (is_survol_text(window, menu->settings.text) == 1)
        sfText_setColor(menu->settings.text, gold_color);
    else
        sfText_setColor(menu->settings.text, sfWhite);
    if (is_survol_text(window, menu->credits.text) == 1)
        sfText_setColor(menu->credits.text, gold_color);
    else
        sfText_setColor(menu->credits.text, sfWhite);
    if (is_survol_text(window, menu->exit.text) == 1)
        sfText_setColor(menu->exit.text, gold_color);
    else
        sfText_setColor(menu->exit.text, sfWhite);
}
