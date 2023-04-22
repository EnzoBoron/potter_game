/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** click_survol.c
*/

#include "../include/potter_header.h"

int is_survol_sprite(window_t *window, sfSprite *sprite)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfSprite_getGlobalBounds(sprite);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue)
        return 1;
    return 0;
}

int is_click_sprite(window_t *window, sfSprite *sprite)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfSprite_getGlobalBounds(sprite);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue && window->event.type == sfEvtMouseButtonReleased &&
    window->event.mouseButton.button == sfMouseLeft) {
        return 1;
    }
    return 0;
}

int is_click_rect(window_t *window, sfRectangleShape *rect)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfRectangleShape_getGlobalBounds(rect);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue && window->event.type == sfEvtMouseButtonReleased &&
    window->event.mouseButton.button == sfMouseLeft) {
        return 1;
    }
    return 0;
}

int is_survol_text(window_t *window, sfText *text)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfText_getGlobalBounds(text);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue)
        return 1;
    return 0;
}

int is_click_text(window_t *window, sfText *text)
{
    sfBool bo = sfFalse;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(window->win);
    sfFloatRect pos_check = sfText_getGlobalBounds(text);
    bo = sfFloatRect_contains(&pos_check, mouse.x, mouse.y);

    if (bo == sfTrue && window->event.type == sfEvtMouseButtonReleased &&
    window->event.mouseButton.button == sfMouseLeft) {
        // sfSound_play(window->sound_button);
        return 1;
    }
    return 0;
}
