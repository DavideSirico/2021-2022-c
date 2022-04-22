//211009_018_Sirico_Davide.c
/*
dati i 2 screenshot
replicare il programma in C
array con DIM = 10 caricato random [1..19]
*/
#include <stdio.h>
#define DIM 10

int main(){
    int v[DIM],i,j,cpr,k,cdiv,l,v2[DIM];
    k=0;
    l=0;
    cpr=0;
    //aggiornamento numeri random
    srand(time(NULL));
    //caricamento dell'array
    for (i=0;i<DIM;i++){
        v[i]=rand()%19+1;
    }
    //conto i numeri primi
    for(i=0;i<DIM;i++){
        for(j=1;j<=v[i]/2;j++){
            if(v[i]%j==0){ //conto i divisori
                cdiv++; 
            }
        }
        if(cdiv==1){
            cpr++;
        }
        cdiv=0;
    }
    //ordino i numeri primi
    for(i=0;i<DIM;i++){
        for(j=1;j<=v[i]/2;j++){//conto i numeri primi
            if(v[i]%j==0){ //conto i divisori
                cdiv++;
            }
        }
        if(cdiv==1){
            v2[l]=v[i];//assegno nelle prime posizioni i numeri primi
            l++;
        } else {
            v2[k+cpr]=v[i];//sommo all'indice il totale dei numeri primi e li assegno
            k++;
        }
        cdiv=0; // resetto il contatore dei numeri divisori
    }
    //visualizzazione primo array
    putchar('\n');
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    //visualizzazione secondo array
    putchar('\n');
    for (i=0;i<DIM;i++){
        printf("%d ",v2[i]);
    }
    return 0;
}