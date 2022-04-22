//210924_008_Sirico_Davide.c
/*
008 - caricare un vettore v con DIM=10 con numeri random a piacere
-visualizzare il vettore
-scambiare il max col min
-visualizzare nuovamente il vettore*/
#include <stdio.h>
#define DIM 10

int main()
{
    int v[DIM],i,min,max,contaMin,contaMax;
    srand(time(NULL));
    for (i=0;i<DIM;i++){
        v[i]=rand()%10+1;
    }
    //visualizzazione 1
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    max=v[0];
    min=v[0];
    for (i=1;i<DIM;i++){
        if(v[i]>max){
            max=v[i];
            contaMax=i;
        }
        if(v[i]<min){
            min=v[i];
            contaMin=i;
        }
    }
    v[contaMin]=max;
    v[contaMax]=min;
    printf("\n");
    //visualizzazione 2
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    return 0;
}