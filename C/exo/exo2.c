#include <stdio.h>

int main(void)
{
    int purchase = 0, amount_paid = 0, result = 0;
    int bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;
    printf("Entrez le total des achats : ");
    scanf("%d", &purchase);
    printf("Entrez la somme payee      : ");
    scanf("%d", &amount_paid);

    if(amount_paid < purchase)
    {
        printf("Vous n'avez pas paye suffisament\n");
        return -1;
    }
    else if(amount_paid == purchase)
    {
        printf("Pas de monnaie a rendre\n");
        return 0;
    }
    else
    {
        result = amount_paid - purchase;
        bill20 = result / 20;
        result %= 20;
        bill10 = result / 10;
        result %= 10;
        bill5 = result / 5;
        result %= 5;
        coin2 = result / 2;
        result %= 2;
        coin1 = result;

        printf("\n___MONNAIE A RENDRE___\n");
        if(bill20 > 0)
        {
            printf("Billet(s) de 20 euros : %d\n", bill20);
        }
        if(bill10 > 0)
        {
            printf("Billet(s) de 10 euros : %d\n", bill10);
        } 
        if(bill5 > 0)
        {
            printf("Billet(s) de 5 euros : %d\n", bill5);
        }
        if(coin2 > 0)
        {
            printf("Piece(s) de 2 euros : %d\n", coin2);
        }
        if(coin1 > 0)
        {
            printf("Piece(s) de 1 euro : %d\n", coin1);
        }
    }

    return 0;
}