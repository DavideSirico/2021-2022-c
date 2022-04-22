//trovare il max
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void visualizza(int []);
void carica(int []);
int trova_max(int [],int,int);
int trova_max1(int [],int,int);
int main(){
    srand(time(NULL));
    int v[DIM];
    carica(v);
    visualizza(v);
    printf("max = %d",trova_max1(v,v[DIM-1],DIM-2));
    return 0;
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}

void carica(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        v[i]=rand()%100;
    }
}


int trova_max(int v[DIM],int n_max,int i){
    if(i==DIM)
        return n_max;
    
    if(n_max<v[i]){
        n_max=v[i];
    }
    return(trova_max(v,n_max,i+1));
    /*if(n_max<v[i])
        return(trova_max(v,v[i],i+1));
    else
        return(trova_max(v,n_max,i+1));*/
}

int trova_max1(int v[DIM],int n_max,int i){
    if(i<0)
        return n_max;
    if(n_max<v[i]){
        n_max=v[i];
    }
    return(trova_max1(v,n_max,i-1));
}
