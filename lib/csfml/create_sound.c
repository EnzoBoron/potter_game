/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** create_sound.c
*/

#include "csfml.h"

sfSound *create_sound(char *path)
{
    static sfSoundBuffer *sound_buf = NULL;
    if (sound_buf == NULL) {
        sfSoundBuffer *sound_buf = sfSoundBuffer_createFromFile(path);
    }
    sfSound *sound = sfSound_create();
    sfSound_setBuffer(sound, sound_buf);

    return sound;
}
