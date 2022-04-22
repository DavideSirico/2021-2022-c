/*
con le primitive di push e di pop caricare, visualizzare e ricercare in un array
dimensionato DIM 10 rispettando la struttura adt della pila.
*/
//TODO meglio guardarselo un po
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

/*funzioni primitive
push=inserisco un elemento da 0
pop=tolgo un elemento da 0  e return n
isEmpty=controlla se la pila è vuota
isFull=controlla se la pila è piena
top=ultimo elemento inserito*/

int top(int []);
int isFull(int []);
int isEmpty(int []);
void push(int [],int);
int pop(int []);
int main(){
    srand(time(NULL));
    int i;
    int v[DIM]={0,0,0,0,0,0,0,0,0,0};
    carica(v);
    visualizza(v);
    return 0;
}

//TODO controllare se è vuoto
void push(int v[DIM],int l){
    int i;
    for(i=DIM-1;i-1>0;i++)
        v[i]=v[i-1];
    v[0]=l;
}
//TODO controllare se è vuoto
int pop(int v[DIM]){
    int i,temp;
    //temp=v[DIM-1];
    for(i=0;i<DIM-1;i++){
        v[i+1]=v[i];
    }
    return v[DIM-1];
}

void carica(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++)
        push(v,rand()%10+1);
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%d ",pop(v));
    }
    putchar('\n');
}