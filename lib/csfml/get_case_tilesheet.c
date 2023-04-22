/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** get_case_tilesheet.c
*/

#include "csfml.h"

sprite_t get_case_tilesheet(int box)
{
    int y = 0; box--;
    sprite_t sprite;
    for (; box > 11; y++, box -= 12);

    sfIntRect rect;
    rect.width = 16;
    rect.height = 16;
    rect.top = ((y * 16) + y);
    rect.left = ((box * 16) + box);

    sprite = create_sprite("asset/tilesheet_way.png", &rect, elem_csfml *csf);
    return sprite;
}
