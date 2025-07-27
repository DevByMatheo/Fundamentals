#include <stdio.h>
#include "../include/player.h"


void bonjour(void) // Avec static -> La fonction ne peut etre appele que dans ce fichier
{
    printf("Bonjour !\n");
}

int augmente_niveau(void)
{
    static int niveau = 0; // La variable ne doit pas etre detruite
    niveau += 2;
    return niveau;
}