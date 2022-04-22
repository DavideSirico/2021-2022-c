//211013_Sirico_Davide.c
/*
Caricare un vettore v di DIM=10 con numeri random [1..100].
Inserire esternamente un numero N > 0 (data entry).
Contare quante volte occorre N nel vettore.
Visualizzare N.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10
int main(){
    int v[DIM],N,i,c;
    c=0;

    srand(time(NULL));
    //caricamento di un array
    for(i=0;i<DIM;i++){
        v[i]=rand()%100+1;
    }
    //data entry N > 0
    do{
        printf("Inserire un numero maggiore di 0: ");
        scanf("%d",&N);
    }while(N<=0);
    //analisi
    for(i=0;i<DIM;i++){
        if(v[i]==N){
            c++;
        }
    }
    putchar('\n');
    printf("%d e' presente %d volte",N,c);
    return 0;
}