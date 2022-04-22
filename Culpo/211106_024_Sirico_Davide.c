//211106_024_Sirico_Davide.c
/*
Caricare due vettori v e v2 con DIM=10 con numeri random [1..100].
Un terzo vettore v3 con DIM=10 contiene il max tra v e v2 di ogni posizione. 
Visualizzare v, v2 e v3 con la griglia semplice.
.......
carica(v)
carica(v2)
carica-max(v,v2,v3)
visualizza-frame(v)  // potete passare un 2° parametro
visualizza-frame(v2) // potete passare un 2° parametro
visualizza-frame(v3) // potete passare un 2° parametro
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void visualizzaframe(int [],int);
void carica(int []);
void caricamax(int [],int [],int []);
int main(){
    int v[DIM],v2[DIM],v3[DIM];
    srand(time(NULL));
    carica(v);
    carica(v2);
    visualizzaframe(v,3);
    visualizzaframe(v2,3);
    caricamax(v,v2,v3);
    visualizzaframe(v3,3);
    return 0;
}

void visualizzaframe(int v[DIM], int c){
    int i,j;
    for(i=0;i<DIM;i++){
        printf(" ");
        for(j=0;j<c;j++){
            printf("-");
        }
    }
    putchar('\n');
    for(i=0;i<DIM;i++){
        printf("|%3d",v[i]);
    }
    printf("|");
    putchar('\n');
    for(i=0;i<DIM;i++){
        printf(" ");
        for(j=0;j<c;j++){
            printf("-");
        }
    }
    putchar('\n');
}

void carica(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        v[i]=rand()%100+1;
    }
}

void caricamax(int v[DIM],int v2[DIM],int v3[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        if(v[i]<v2[i]){
            v3[i]=v2[i];
        } else {
            v3[i]=v[i];
        }
    }

}