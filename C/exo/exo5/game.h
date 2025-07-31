#ifndef __GAME__H__
#define __GAME__H__

    #define MAX_LONGUEUR 100
    #define MAX_LARGEUR 100

    char menu(char map[][MAX_LARGEUR], int longueur, int largeur);
    void creer_map(char map[][MAX_LARGEUR], int *longueur, int *largeur);
    void afficher_map(char map[][MAX_LARGEUR], int longueur, int largeur);
    void upper(char map[][MAX_LARGEUR], int *longueur, int *largeur);
    void down(char map[][MAX_LARGEUR], int *longueur, int *largeur);
    void right(char map[][MAX_LARGEUR], int *longueur, int *largeur);
    void left(char map[][MAX_LARGEUR], int *longueur, int *largeur);


#endif