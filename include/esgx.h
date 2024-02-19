#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

// Recherche du système d'exploitation
extern void os_type();
extern void exit_with_error(SDL_Window *window, SDL_Renderer *renderer);
extern void destroy_sdl(SDL_Window *window, SDL_Renderer *renderer);

// Initialisation de la fenêtre
extern int init_graphics(char *title, int width, int height);



