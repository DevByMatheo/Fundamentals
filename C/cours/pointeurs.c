#include <stdio.h>

/*
*monPointeur = NULL ou *monPointeur = &maVariable (déclaration)

monPointeur  : adresse de la variable pointée
*monPointeur : valeur de la variable pointée
&monPointeur : adresse du pointeur
*/


void inverser_nombre(int *pt_nb1, int *pt_nb2)
{
    int temp = 0;
    temp = *pt_nb2;
    *pt_nb2 = *pt_nb1;
    *pt_nb1 = temp;
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 28;

    /*
    int *pointeur_nombreA = &nombreA;
    int *pointeur_nombreB = &nombreB;
    inverser_nombre(pointeur_nombreA, pointeur_nombreB);
    */

// ou 
    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombre(&nombreA, &nombreB);
    printf("APRES : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}