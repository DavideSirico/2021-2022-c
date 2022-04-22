//211006_014_Sirico_Davide.c
/*
014 - Caricare un vettore v dimensionato 10 con in primi 10 numeri naturali.
Eseguire un left-shift (spingere a sx) 1 2 3 4 5 6 7 8 9 10 ->  2 3 4 5 6 7 8 9 10 1
*/
#include <stdio.h>
#define DIM 10

int main(){
	int temp,v[DIM]={1,2,3,4,5,6,7,8,9,10},i;
    temp=v[0];
    for(i=0;i<DIM-1;i++){
        v[i]=v[i+1];
    }
    v[DIM-1]=temp;

	//visualizzazione
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
}