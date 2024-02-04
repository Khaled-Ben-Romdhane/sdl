#include <SDL2/SDL.h>
#include <stdio.h>
int main() {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO) != 0) {
        printf("ERREUR: %s \n", SDL_GetError());
        return 1;
    }

    // Création de la fenêtre
    SDL_Window* window = SDL_CreateWindow("Ma Fenêtre SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("ERREUR lors de la création de la fenêtre : %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Attente pendant quelques secondes
    SDL_Delay(5000);

    // Libérer les ressources et quitter SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
