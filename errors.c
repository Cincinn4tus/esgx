#include "include/esgx.h"

void exit_with_error(SDL_Window *window, SDL_Renderer *renderer)
{
    SDL_Log("Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    exit(-1);
}

void destroy_sdl(SDL_Window *window, SDL_Renderer *renderer)
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}