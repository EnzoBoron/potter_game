/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** init_text.c
*/

#include "../include/potter_header.h"

void init_music(menu_t *menu)
{
    menu->music = create_music("music/prologue_hp.ogg");
    sfMusic_play(menu->music);
    menu->barre = create_sprite("asset/barre.png", NULL);
    sfSprite_setPosition(menu->barre.sprite, (sfVector2f){350, 500});
    menu->barre_fx = create_sprite("asset/barre.png", NULL);
    sfSprite_setPosition(menu->barre_fx.sprite, (sfVector2f){350, 650});
    menu->button_barre = create_sprite("asset/bouton.png", NULL);
    sfSprite_setPosition(menu->button_barre.sprite, (sfVector2f){360, 500});
    menu->button_fx = create_sprite("asset/bouton.png", NULL);
    sfSprite_setPosition(menu->button_fx.sprite, (sfVector2f){360, 650});
    menu->return_settings = create_text("return", (sfVector2f){50, 1000}, 50, sfWhite);

    return;
}

void align_text(menu_t *menu)
{
    sfVector2f pos = {300, 0};
    pos = sfText_getPosition(menu->play.text);
    pos.y += sfText_getCharacterSize(menu->play.text);
    sfText_setPosition(menu->play.text, pos);
    pos.y = 300;
    pos = sfText_getPosition(menu->how_to_play.text);
    pos.y += sfText_getCharacterSize(menu->how_to_play.text);
    sfText_setPosition(menu->how_to_play.text, pos);
    pos.y = 300;
    pos = sfText_getPosition(menu->settings.text);
    pos.y += sfText_getCharacterSize(menu->settings.text);
    sfText_setPosition(menu->settings.text, pos);
    pos.y = 300;
    pos = sfText_getPosition(menu->credits.text);
    pos.y += sfText_getCharacterSize(menu->credits.text);
    sfText_setPosition(menu->credits.text, pos);
    pos.y = 300;
    pos = sfText_getPosition(menu->exit.text);
    pos.y += sfText_getCharacterSize(menu->exit.text);
    sfText_setPosition(menu->exit.text, pos);
}

void init_settings(menu_t *menu)
{
    menu->music_txt = create_text("music", (sfVector2f){300, 450}, 50, sfWhite);
    menu->fx = create_text("sfx", (sfVector2f){300, 600}, 50, sfWhite);

    return;
}

menu_t *init_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->play = create_text("Play", (sfVector2f){300, 350}, 50, sfWhite);
    menu->how_to_play = create_text("How to play", (sfVector2f){300, 450}, 50, sfWhite);
    menu->settings = create_text("Settings", (sfVector2f){300, 550}, 50, sfWhite);
    menu->credits = create_text("Credits", (sfVector2f){300, 650}, 50, sfWhite);
    menu->exit = create_text("Exit", (sfVector2f){300, 750}, 50, sfWhite);
    menu->wallpaper = create_sprite("asset/menu/wallpaper.png", NULL);

    init_settings(menu);
    align_text(menu);
    init_music(menu);
    return menu;
}
