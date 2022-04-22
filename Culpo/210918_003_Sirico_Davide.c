//210918_003_Sirico_Davide.c
/*
003 - (101) Dati due numeri "m" e "n", visualizzare,
contare e sommare i numeri che sono divisori di entrambi.
Esempio con m=20, n=30 
1 2 5 10 conteggio 4, somma 18
*/
#include <stdio.h>

int main()
{
    int m,n,contatore,somma,i;
        int m,n,contatore,somma,i;
    contatore = 0, somma = 0;
    printf("Inserisci un numero n: ");
    scanf("%d",&n);
    
    fflush(stdin);
    
    printf("Inserisci un numero m: ");
    scanf("%d",&m);

    for (i=1;(i<=n) && (i<=m);i++) //usare solo il minore  
    {
        if ((n%i==0) && (m%i==0))
        {
            contatore = contatore + 1;
            somma = somma + i;
            printf("%d ",i);
        }
    }

    printf("\nconteggio: %d\nsomma: %d",contatore,somma);

    return 0;
}