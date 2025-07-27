#include <stdio.h>
#include "include/player.h"

#define TVA 20

/*
    __FILE__
    __LINE__
    __DATE__
    __TIME__
*/

int main(void)
{
    bonjour();
    printf("Niveau : %d\n", augmente_niveau());
    printf("Niveau : %d\n", augmente_niveau());
    printf("Niveau : %d\n", augmente_niveau());

    int prixHT = 15;
    int prixTTC = 0;

    prixTTC = prixHT + (prixHT * TVA / 100);

    printf("Nom du fichier ; %s\n", __FILE__);

    return 0;
}
