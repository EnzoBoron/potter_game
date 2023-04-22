/*
** EPITECH PROJECT, 2022
** potter_game
** File description:
** init_ptr.c
*/

#include "../include/potter_header.h"

func_ptr *init_event_ptr(void)
{
    func_ptr *ptr_envt = malloc(4 * sizeof(func_ptr));
    ptr_envt[0] = &click_menu;
    ptr_envt[1] = &click_credit;
    ptr_envt[2] = &click_settings;

    return ptr_envt;
}

func_ptr *init_event_draw(void)
{
    func_ptr *ptr_draw = malloc(4 * sizeof(func_ptr));

    ptr_draw[0] = &draw_menu;
    ptr_draw[1] = &draw_credits;
    ptr_draw[2] = &draw_settings;

    return ptr_draw;
}