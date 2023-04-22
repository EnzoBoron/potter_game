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
    } window_t;

    void loop_game(void);

#endif /*_MY_POTTER_HEADER_*/
