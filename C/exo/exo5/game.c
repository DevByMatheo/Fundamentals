#include <stdio.h>
#include "game.h"

char menu(char map[][MAX_LARGEUR], int longueur, int largeur)
{
    int choix = 0;
    printf("\n---------MENU---------\n");
    printf("n -> Nouvelle map\nu -> Up\nd -> Down\nr -> Right\nl -> Left\nq -> Quitter\n\n");
    printf("Votre choix : ");
    scanf(" %c", &choix);

    switch(choix)
    {
    case 'n':
            creer_map(map, &longueur, &largeur);
            break;
        case 'u':
            upper(map, &longueur, &largeur);
            break;
        case 'd':
            down(map, &longueur, &largeur);
            break;
        case 'r':
            right(map, &longueur, &largeur);
            break;
        case 'l':
            left(map, &longueur, &largeur);
            break;
        case 'q':
            return 'q';
    }
    return 0;
}

void creer_map(char map[][MAX_LARGEUR], int *longueur, int *largeur)
{
    int i, j;

    printf("Combien de longueur souhaitez-vous pour votre map ? ");
    scanf("%d", longueur);

    printf("Combien de largeur souhaitez-vous pour votre map ? ");
    scanf("%d", largeur);
    printf("\n");

    *longueur *= 2;
    *largeur *=2;

    for (i = 0; i < *longueur; i++) 
    {
        for (j = 0; j < *largeur; j++) 
        {
            if(i == 0 || j == 0 || i == *longueur - 1 || j == *largeur - 1)
            {
                map[i][j] = 'O';
            }
            else
            {
                map[i][j] = '.';
            }
        }
    }
    map[1][1] = 'T';

    afficher_map(map, *longueur, *largeur);

}

void afficher_map(char map[][MAX_LARGEUR], int longueur, int largeur)
{
    int i, j;
    for(i = 0; i < longueur; i++)
    {
        for(j = 0; j < largeur; j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n"); 
    }
}

void upper(char map[][MAX_LARGEUR], int *longueur, int *largeur)
{
    int ligne = 0, colonne = 0;

    for(int i = 0; i < *longueur; i++) {
        for(int j = 0; j < *largeur; j++) {
            if(map[i][j] == 'T') {
                ligne = i;
                colonne = j;
            }
        }
    }

    if(map[ligne - 1][colonne] != 'O') {
        map[ligne][colonne] = '.';
        map[ligne - 1][colonne] = 'T';
    }

    afficher_map(map, *longueur, *largeur);
}

void down(char map[][MAX_LARGEUR], int *longueur, int *largeur)
{
    int ligne = 0, colonne = 0;

    for(int i = 0; i < *longueur; i++) {
        for(int j = 0; j < *largeur; j++) {
            if(map[i][j] == 'T') {
                ligne = i;
                colonne = j;
            }
        }
    }

    if(map[ligne + 1][colonne] != 'O') {
        map[ligne][colonne] = '.';
        map[ligne + 1][colonne] = 'T';
    }

    afficher_map(map, *longueur, *largeur);
}

void left(char map[][MAX_LARGEUR], int *longueur, int *largeur)
{
    int ligne = 0, colonne = 0;

    for(int i = 0; i < *longueur; i++) {
        for(int j = 0; j < *largeur; j++) {
            if(map[i][j] == 'T') {
                ligne = i;
                colonne = j;
            }
        }
    }

    if(map[ligne][colonne - 1] != 'O') {
        map[ligne][colonne] = '.';
        map[ligne][colonne - 1] = 'T';
    }

    afficher_map(map, *longueur, *largeur);
}

void right(char map[][MAX_LARGEUR], int *longueur, int *largeur)
{
    int ligne = 0, colonne = 0;

    for(int i = 0; i < *longueur; i++) {
        for(int j = 0; j < *largeur; j++) {
            if(map[i][j] == 'T') {
                ligne = i;
                colonne = j;
            }
        }
    }

    if(map[ligne][colonne + 1] != 'O') {
        map[ligne][colonne] = '.';
        map[ligne][colonne + 1] = 'T';
    }

    afficher_map(map, *longueur, *largeur);
}
