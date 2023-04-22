/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** csfml.h
*/

#ifndef _CSFML_H_
    #define _CSFML_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    typedef struct sprite_s {
        sfSprite *sprite;
        sfTexture *texture;
    } sprite_t;

    typedef struct text_s {
        sfText *text;
        sfFont *font;
    } text_t;

    sfSound *create_sound(char *path);
    sfRenderWindow *create_window(int x, int y);
    text_t create_text(char *contenu, sfVector2f pos, int weight, sfColor);
    void destroye_text(text_t text);
    sfText *create_text_grass(char **str, sfVector2f pos, int wei[2], sfColor);
    void *set_text_middle_origine(sfText *text);
    void *set_sprite_middle_origine(sfSprite *sprite);
    sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f size);
    void *set_rect_middle_origine(sfRectangleShape *rect);
    sprite_t create_items(char *pathfile);
    sfMusic *create_music(const char *pathfile);
    sprite_t get_case_tilesheet(int box);
    sfView *create_view(sfRenderWindow *window);
    sfRenderWindow *create_window_fullscreen(int x, int y);
    void display_case_tilesheet(int, sfRenderWindow *, char *);
    int is_colision_hero_items(sfSprite *sprite1, sfRectangleShape *sprite2);
    void create_queste(sfRenderWindow *window, char *title_quest, char *quest);
    sprite_t create_sprite(char *name, const sfIntRect *area);
    void destroy_sprite(sprite_t sprite);

#endif /* _CSFML_H_ */
