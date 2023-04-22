/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_prg.h
*/
#ifndef  _MY_POTTER_HEADER_
    #define _MY_POTTER_HEADER_
    #include "my.h"
    #include "printf.h"
    #include "sprintf.h"
    #include "csfml.h"

    typedef struct window_s {
        sfRenderWindow *win;
        sfEvent event;
        short status;
    } window_t;

    typedef struct menu_s {
        text_t play;
        text_t how_to_play;
        text_t settings;
        text_t credits;
        text_t exit;

        text_t music_txt;
        text_t fx;
        sprite_t barre;
        sprite_t barre_fx;
        sprite_t button_barre;
        sprite_t button_fx;
        text_t return_settings;

        sprite_t wallpaper;

        sfMusic *music;
    } menu_t;

    typedef void (*func_ptr)(menu_t*, window_t*);

    menu_t *init_menu(void);

    void draw_menu(menu_t*, window_t*);
    void loop_game(void);

    int is_click_text(window_t *window, sfText *text);
    int is_survol_text(window_t *window, sfText *text);
    int is_click_rect(window_t *window, sfRectangleShape *rect);
    int is_click_sprite(window_t *window, sfSprite *sprite   );
    int is_survol_sprite(window_t *window, sfSprite *sprite);

    void survol_text(window_t *win, menu_t *);

    void click_menu(menu_t *menu, window_t *window);
    void draw_menu(menu_t *menu, window_t *window);
    void click_on_exit(menu_t *menu, window_t *window);
    void draw_credits(menu_t *menu, window_t *window);
    void click_credit(menu_t *menu, window_t *window);

    void click_settings(menu_t *menu, window_t *window);
    void draw_settings(menu_t *menu, window_t *window);

    func_ptr *init_event_ptr(void);
    func_ptr *init_event_draw(void);

    void click_game(menu_t *menu, window_t *window);
    void draw_game(menu_t *menu, window_t *window);
#endif /*_MY_POTTER_HEADER_*/
