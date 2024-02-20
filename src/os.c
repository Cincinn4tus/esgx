#include "../include/esgx.h"

void os_type()
{
    // Recherche du système d'exploitation
    #ifdef _WIN32
        printf("Lanceent du programme : Windows\n");
    #elif __linux__
        printf("Lancement du programme : Linux\n");
    //
    #elif __APPLE__
        printf("Lanceent du programme : MacOS\n");
        #else
            printf("Lanceent du programme : OS non reconnu\n");
    #endif
}