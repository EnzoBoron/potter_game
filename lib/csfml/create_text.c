/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_text.c
*/

#include "csfml.h"

text_t create_text(char *contenu, sfVector2f pos, int weight, sfColor color)
{
    text_t text;
    text.text = sfText_create();
    text.font = sfFont_createFromFile("font/InstrumentSerif-Italic.ttf");
    sfText_setString(text.text, contenu);
    sfText_setColor(text.text, color);
    sfText_setFont(text.text, text.font);
    sfText_setCharacterSize(text.text, weight);
    sfText_setPosition(text.text, pos);

    return text;
}

sfText *create_charactere(char contenu, sfVector2f pos, int wei, sfColor color)
{
    static sfFont *font = NULL;
    if (font == NULL) {
        font = sfFont_createFromFile("../assets/fonts/arial.ttf");
    }
    sfText *text = sfText_create();
    sfText_setString(text, &contenu);
    sfText_setColor(text, color);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, wei);
    sfText_setPosition(text, pos);

    return text;
}

void destroye_text(text_t text)
{
    sfText_destroy(text.text);
    sfFont_destroy(text.font);

    return;
}
