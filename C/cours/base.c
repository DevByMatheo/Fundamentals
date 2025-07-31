#include <stdio.h>

#define TAILLE_TAB 5

/*
    ==== 🧾 C CHEATSHEET COMPLET ====

    === 🔤 FORMAT (printf / scanf) ===
        %d : int
        %f : float
        %c : char
        %s : string (texte)

    === 🔣 OPÉRATEURS LOGIQUES ===
        && : ET (AND)
        || : OU (OR)
        !  : NON (NOT)

    === 📦 TYPES ===
        int, float, char, signed char
        const       : constante
        register    : stocké dans un registre
        volatile    : jamais optimisé par le compilateur
*/

// ==== 📌 FONCTIONS ====
int init_ball(int);
void afficher_tableau(int tab[], int taille);
int *creer_tableau(void);
void inverser_nombre(int *pt_nb1, int *pt_nb2);
int pointeurs(void);

// ==== 🧪 FONCTION MAIN ====
int main(void)
{
    // ==== 🧱 Déclarations de base ====
    int aire_carre = 0;
    int ageUtilisateur = 0;
    float nombre = 125.99;
    signed char lettre = 'A';
    int nombre_entier = (int)nombre;
    const float PI = 3.14;

    register int nb1 = 5;
    volatile int nb2 = 10;

    aire_carre += 12;

    // ==== 🖨️ Affichage ====
    printf("Le nombre est %.2f ou %d.\n", nombre, nombre_entier);
    printf("%d\n", aire_carre + nombre_entier);

    // ==== 📥 Entrée utilisateur ====
    printf("Quel age avez vous ? ");
    scanf("%d", &ageUtilisateur);
    printf("Vous avez %d ans.\n", ageUtilisateur);

    // ==== 🔁 Conditions ====
    if(ageUtilisateur >= 18 && ageUtilisateur <= 100)
        printf("Vous etes majeur\n");
    else if(ageUtilisateur <= 0 || ageUtilisateur >= 100)
        printf("Tu n'es pas vivant\n");
    else
        printf("Vous etes mineur\n");

    int jeu_demarre = 0;
    if(!jeu_demarre)
        printf("Bienvenue sur le jeu.\n");
    else
        printf("Le jeu n'a pas ete lance\n");

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

    // ==== ❓ Opérateur ternaire ====
    int il_a_vingt_ans = -1;
    (ageUtilisateur == 20) ? printf("Tu as 20 ans\n") : printf("Tu n'as pas 20 ans\n");
    il_a_vingt_ans = (ageUtilisateur == 20) ? 1 : 0;

    ageUtilisateur++;
    printf("L'annee prochaine vous aurez %d ans.\n", ageUtilisateur);

    // ==== 🔁 Boucles ====
    int i = 0;
    while(i < 2)
    {
        printf("Coucou\n");
        i++;
    }

    do {
        printf("Aya !!!\n");
        i++;
    } while(i < 5);

    for(i = 0; i < 5; i++)
        printf("Test \n");

    // ==== ⚽ Fonction avec return ====
    int balleX;
    balleX = init_ball(balleX);

    // ==== 📌 TABLEAUX ====
    int tableau[5];
    tableau[0] = 14;

    int tableau2[5] = {16, 4, -5, 22, 188};
    afficher_tableau(tableau2, TAILLE_TAB);
    printf("\n");

    int tableau_de_zero[5] = {0}; // tous les éléments = 0

    int *tab_fonction = creer_tableau();
    afficher_tableau(tab_fonction, TAILLE_TAB);
    printf("\n");

    int damier[3][2] =
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int l, j;
    for(l = 0; l < 3; l++)
        for(j = 0; j < 2; j++)
            printf("Element d'indice [%d][%d] = %d\n", l, j, damier[l][j]);

    // ==== ⭐ APPEL TEST POINTEURS ====
    pointeurs();

    return 0;
}

// ==== 📦 INIT BALL ====
int init_ball(int posX)
{
    posX = 150;
    return posX;
}

// ==== 📦 AFFICHER TABLEAU ====
void afficher_tableau(int tab[], int taille)
{
    for(int i = 0; i < taille; i++)
        printf("[%d]", tab[i]);
}

// ==== 📦 CRÉER TABLEAU ====
int *creer_tableau(void)
{
    static int tableau_entier[5];
    for(int i = 0; i < 5; i++)
        tableau_entier[i] = i * 3;
    return tableau_entier;
}

// ==== 🧠 POINTEURS ====
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

int pointeurs(void)
{
    int nombreA = 15;
    int nombreB = 28;

    /*
    int *pointeur_nombreA = &nombreA;
    int *pointeur_nombreB = &nombreB;
    inverser_nombre(pointeur_nombreA, pointeur_nombreB);
    */

    // ou version simplifiée
    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombre(&nombreA, &nombreB);
    printf("APRES : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}
