//211006_013_Sirico_Davide.c
/*
013 - Caricare un vettore v dimensionato 10 con in primi 10 numeri naturali.
Eseguire un right-shift (spingere a dx) 1 2 3 4 5 6 7 8 9 10 ->  10 1 2 3 4 5 6 7 8 9
*/
#include <stdio.h>
#define DIM 10

int main(){
	int temp,v[DIM]={1,2,3,4,5,6,7,8,9,10},i;
    temp=v[DIM-1];
    for(i=DIM-1;i>0;i--){
        v[i]=v[i-1];
    }
    v[0]=temp;

	//visualizzazione
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
}