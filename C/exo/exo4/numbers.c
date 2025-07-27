#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>

void show_menu(void)
{
    printf("\n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Quitter le programme\n");
    printf("------------------------------------\n");
}

void do_operation(int choice)
{
    int nbr1 = 0, nbr2 = 0;
    int result = 0;
    do
    {
        printf("Entrez un premier nombre  : ");
        scanf("%d", &nbr1);
        printf("Entrez un second nombre  : ");
        scanf("%d", &nbr2);

        if(nbr1 < -1000 || nbr1 > 1000 || nbr2 < -1000 || nbr2 > 1000)
        {
            printf("Saisie incorrecte (choisir un nmbre entre -1000 et 1000)\n");
        }
        else
        {
            if(choice == 1) result = addition(nbr1, nbr2);
            else if(choice == 2) result = soustraction(nbr1, nbr2);
            else if(choice == 3) result = multiplication(nbr1, nbr2);
            else if(choice == 4) result = division(nbr1, nbr2);

            printf("Resultat du calcul = %d\n", result);
        }
    }
    while(nbr1 < -1000 || nbr1 > 1000 || nbr2 < -1000 || nbr2 > 1000);


}

int addition(int nbr1, int nbr2)
{
    return nbr1 + nbr2;
}

int soustraction(int nbr1, int nbr2)
{
    return nbr1 - nbr2;
}

int multiplication(int nbr1, int nbr2)
{
    return nbr1 * nbr2;
}

int division(int nbr1, int nbr2)
{
    if(nbr2 == 0)
    {
        printf("Division par 0 impossible");
        exit(-1);
    }
    return nbr1 / nbr2;
}