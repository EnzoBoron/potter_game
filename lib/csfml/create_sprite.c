/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_sprite.c
*/

#include "csfml.h"

sprite_t create_sprite(char *name, const sfIntRect *area)
{
    sprite_t sprite;
    sprite.sprite = sfSprite_create();
    sprite.texture = sfTexture_createFromFile(name, area);
    sfSprite_setTexture(sprite.sprite, sprite.texture, sfTrue);
    return sprite;
}

void destroy_sprite(sprite_t sprite)
{
    sfTexture_destroy(sprite.texture);
    sfSprite_destroy(sprite.sprite);
    return;
}
