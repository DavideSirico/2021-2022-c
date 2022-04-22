//210918_005_Sirico_Davide.c
/*005 -(204) Dato un numero, contare quanti suoi divisori sono potenze di 2.
Esempio: 16
2 4 8 16 		4
Esempio: 25
(nessuno) 		0
*/
#include <stdio.h>

int main()
{
    int n,contaDivisori,i;
    contaDivisori=0;
    
    printf("Numero: ");
    scanf("%d",&n);
    fflush(stdin);
    
    for (i=2;i<=n;i=i*2)
    {
        if (n%i==0)
        {
            contaDivisori=contaDivisori+1;
            printf("%d ",i);
        }
    }

    printf("\nNumero divisori=%d",contaDivisori);
    
    return 0;
}