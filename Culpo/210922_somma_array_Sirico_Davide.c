//210922_007_Sirico_Davide.c
/*caricare e visualizzare un vettore v con DIM=10
con numeri random tra 55 e 99
estremi inclusi, visualizzare min,max,somma*/
#include <stdio.h>
#define DIM 10
int main()
{
    int v[DIM], i, max, min, somma;
    somma=0;
    max=0;
    min=100;
    srand(time(NULL));
    //caricamento random interno
    for (i=0;i<DIM;i++){
        v[i]=rand()%45+55;
        somma=somma+v[i];
        if (v[i]>max){
            max=v[i];
        }
        if (v[i]<min){
            min=v[i];
        }
    }
    //visualizzazione
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    printf("\nMin=%d",min);
    printf("\nMax=%d",max);
    printf("\nSomma=%d",somma);
    
    return 0;
}