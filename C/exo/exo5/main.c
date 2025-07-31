#include <stdio.h>
#include "game.h"

int main(void)
{
    char map[MAX_LONGUEUR][MAX_LARGEUR];
    int longueur, largeur;

    char choix = ' ';
    creer_map(map, &longueur, &largeur);
    do
    {
        choix = menu(map, longueur, largeur);
    }
    while(choix != 'q');

    return 0; 
}