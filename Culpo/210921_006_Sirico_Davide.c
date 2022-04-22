//210921_006_Sirico_Davide.c
/*Inserire dei numeri a piacere (0 to esc).
Visualizzare il primo max e il secondo max*/

#include<stdio.h>

int main()
{
    int n,max1,max2;
    printf("Numero: ");
    scanf("%d",&n);
	fflush(stdin);
	max1=n;
	printf("Numero: ");
    scanf("%d",&n);
	fflush(stdin);
	max2=n;
    do{
        if (n>max1){
            max2=max1;
            max1=n;
        } else {
            if (n>max2){
                max2=n;
            }
        }
        printf("Numeri: ");
        scanf("%d",&n);
    }while (n!=0);
    printf("Max1=%d",max1);
    printf("\nMax2=%d",max2);
    return 0;
}
