//210922_007_Sirico_Davide.c
/*caricare e visualizzare un vettore v con DIM=10
con numeri random tra 55 e 99
estremi inclusi, visualizzare min,max,somma,media*/
#include <stdio.h>
#define DIM 10
int main()
{
    int v[DIM], i, max, min;
    float media, somma;
    somma=0;
    media=0.00;
    srand(time(NULL));
    for (i=0;i<DIM;i++){
        v[i]=rand()%55+44;
        somma=somma+v[i];
    }
    max=v[0];
    min=v[0];
    for (i=1;i<DIM;i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min=v[i];
        }
    }
    media=somma/DIM;
    printf("\nMax=%d",max);
    printf("\nMin=%d",min);
    printf("\nSomma=%.0f",somma);
    printf("\nMedia=%.2f",media);   
    return 0;
}