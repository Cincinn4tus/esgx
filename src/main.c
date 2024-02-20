#include "../include/esgx.h"


int main()
{
    // Recherche du système d'exploitation
    os_type();

    // Initialisation de la fenêtre
    init_graphics("Ma fenêtre", 1440, 900);

// ligne de commande pour compiler le programme avec la sdl : gcc -o test *.c -lSDL2
    return 0;
}

