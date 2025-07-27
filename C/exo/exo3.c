#include <stdio.h>

int main(void)
{
    int min = 0, max = 0, result = 0;
    printf("Entrez un premier nombre : ");
    scanf("%d", &min);
    printf("Entrez un second nombre : ");
    scanf("%d", &max);
    if(min > max)
    {
        printf("Le premier chiffre est plus grand que le second !");
        return -1;
    }
    if(min < 1 || max > 1000)
    {
        printf("Les nombres doivent etre compris dans [1; 1000]");
        return -1;
    }

    if(min != max)
    {
        for(int i = min; i <= max; i++)
        {
            result += i;
        }
    }
    else
    {
        result = min;
    }

    printf("Somme finale : %d", result);
    return 0;
}