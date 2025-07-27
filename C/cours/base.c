#include <stdio.h>

/*
    %d : int
    %f : float
    %c : char
    %s : texte
*/ 

/*
    && : ET
    || : OU
    !  : NOT
*/ 

int init_ball(int); // Prototype de la fonction

int main(void)
{
    int aire_carre = 0;
    int ageUtilisateur = 0;
    float nombre = 125.99;
    signed char lettre = 'A'; // => signed char = 65 dans la table ASCII
    int nombre_entier = (int)nombre;
    const float PI = 3.14;

    register int nb1 = 5; // var stocké dans les registres (+ rapide)
    volatile int nb2 = 10; // var reste tjrs dans la mémoire volatile jamais dans les registres

    aire_carre += 12;

    printf("Le nombre est %.2f ou %d.\n", nombre, nombre_entier);
    printf("%d\n", aire_carre + nombre_entier);

    printf("Quel age avez vous ? ");
    scanf("%d", &ageUtilisateur); // &ageUtilisateur adresse de ageUtilisateur
    printf("Vous avez %d ans.\n", ageUtilisateur);
    if(ageUtilisateur >= 18 && ageUtilisateur <= 100)
    {
        printf("Vous etes majeur\n");
    }
    else if(ageUtilisateur <= 0 || ageUtilisateur >= 100)
    {
        printf("Tu n'es pas vivant\n");
    }
    else
    {
        printf("Vous etes mineur\n");
    }


    int jeu_demarre = 0; // 0 == False; 1 == True
    if(!jeu_demarre)
    {
        printf("Bienvenue sur le jeu.\n");
    }
    else
    {
        printf("Le jeu n'a pas ete lance\n");
    }


    switch(ageUtilisateur)
    {
        case 0:
            printf("Tu as 0 an\n");
            break;

        case 15:
            printf("Age vaut 15\n");
            break;

        default:
            printf("Tu n'as ni 0 an ni 15 ans\n");
            break;
    }
    int il_a_vingt_ans = -1;
    
    (ageUtilisateur == 20) ? printf("Tu as 20 ans\n") : printf("Tu n'as pas 20 ans\n");
    il_a_vingt_ans = (ageUtilisateur == 20) ? 1 : 0;

    ageUtilisateur++;
    printf("L'annee prochaine vous aurez %d ans.\n", ageUtilisateur);

    int i = 0;

    while(i < 2)
    {
        printf("Coucou\n");
        i++;
    }

    do  // On execute au moins une fois avant de verifier la confition
    {
        printf("Aya !!!\n");
        i++;
    }
    while( i < 5);

    for (i = 0; i < 5; i++)
    {
        printf("Test \n");
    }

    int balleX;
    balleX = init_ball(balleX);
    
    return 0;
}



int init_ball(int posX)
{
    posX = 150;
    return posX;
}