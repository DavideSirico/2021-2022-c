/*
4>
Scrivi una funzione ricorsiva che esegua la ricerca del massimo
tra gli elementi di un intervallo appartenente ad un vettore di trenta numeri interi positivi.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 30

void visualizza(int []);
void carica(int []);
int trova_max(int *,int,int);
int main(){
    int v[DIM];
    int *p_v;
    carica(v);
    visualizza(v);
    p_v=v+1;
    printf("Max: %d",trova_max(p_v,v[0],1));
    return 0;
}

int trova_max(int *v,int max,int i){
    if(i==DIM){
        return max;
    }
    if(*v>max){
        max=*v;
    }
    trova_max(v+1,max,i+1); 
}

void carica(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++)
        v[i]=rand()%30;
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++)
        printf("%d ",v[i]);
    putchar('\n');
}