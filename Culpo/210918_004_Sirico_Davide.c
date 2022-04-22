//210918_004_Sirico_Davide.c
/*
004 - (201) Dato un numero, contare quanti divisori pari e quanti divisori dispari ha.
Esempio: 16
Dispari: 1 			    1
Pari: 2 4 8 16 			4

Esempio: 25
Dispari: 1 5 25 		3
Pari: (nessuno) 		0
*/
#include <stdio.h>

int main()
{
    int n,contaPari,contaDispari,i;

    contaDispari = 0;
    contaPari = 0;
    printf("Inserire un numero: ");
    scanf("%d",&n);
    printf("Pari: ");
    for (i=1;i<=n;i++)   
    {
        if (n%i==0)
        {
            if (i%2==0)
            {
                contaPari = contaPari + 1;
                printf("%d ", i);
            }
        }
    }
    
    printf("\nDispari: ");
    for (i=1;i<=n;i++)   
    {
        if (n%i==0)
        {
            if (i%2!=0)
            {
                contaDispari = contaDispari + 1;
                printf("%d ", i);
            }
        }
    }

    printf("\nTotale dispari: %d",contaDispari);
    printf("\nTotale pari: %d",contaPari);

    return 0;
}