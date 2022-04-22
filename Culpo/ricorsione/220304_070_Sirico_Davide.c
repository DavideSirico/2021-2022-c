#include <stdio.h>
#define DIM 10

int ricerca(int [],int,int);
int main(){
    int v[DIM]={1,2,4,5,6,4,3,2,3,3};
    int n;
    printf("Numero: ");
    scanf("%d",&n);
    fflush(stdin);
    if(ricerca(v,0,n)==1){
        printf("Numero trovato");
    } else {
        printf("Numero non trovato");
    }
    return 0;
}

int ricerca(int v[DIM],int i,int n){
    if(i==DIM){
        return 0;
    }
    if(v[i]==n){
        return 1;
    } else {
        return(ricerca(v,i+1,n));
    }
}
