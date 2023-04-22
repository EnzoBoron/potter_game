/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** display_case_tilesheet.c
*/

#include "csfml.h"

// printf("left %d, top %d\n", rect.left, rect.top);
void display_case_tilesheet(int box, sfRenderWindow *window, char *path)
{

    sprite_t sprite;
    sfIntRect rect;
    int yy = 0;
    for (; box > 8; yy++, box -= 9);
    float spriteWidth = 240 / 4;
    float spriteHeight = 544 / 9;
    rect.width = spriteWidth;
    rect.height = spriteHeight;
    rect.top = spriteHeight * yy;
    rect.left = spriteWidth * box;
    sprite = create_sprite(path, NULL);
    sprite.sprite = set_sprite_middle_origine(sprite.sprite);
    sfSprite_setTextureRect(sprite.sprite, rect);
    sfSprite_setPosition(sprite.sprite, (sfVector2f){2820 / 2, 1200 / 2});
    sfSprite_setScale(sprite.sprite, (sfVector2f){2, 2});
    sfRenderWindow_drawSprite(window, sprite.sprite, NULL);
    destroy_sprite(sprite);
}
