#include "include/esgx.h"

int init_graphics(char *title, int width, int height)
{
    printf("Initialisation de la fenêtre. Nom de la fenêtre : %s, largeur : %d, hauteur : %d\n", title, width, height);
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_VIDEO) != 0 ? exit_with_error(window, renderer) : 0;


    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);
    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer) != 0 ? exit_with_error(window, renderer) : 0;
    SDL_SetWindowTitle(window, title);

    // Dessiner une ligne rouge
    SDL_SetRenderDrawColor(renderer, 255,0,0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawLine(renderer, 0, 0, 1440, 900);


    SDL_RenderPresent(renderer);


    // Laisser la fenêtre ouverte indéfiniment
    SDL_Delay(3000);

    destroy_sdl(window, renderer);
    return 0;
}

