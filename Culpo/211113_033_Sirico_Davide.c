//211113_033_Sirico_Davide.c
/*
Dichiarare un vettore v DIM 5
Inserire esternamente un numero di 5 cifre
Demolire il numero in cifre e inserire ogni cifra nello stesso
ordine nel vettore
*/
#include <stdio.h>
#define DIM 5

int main(){
    int i,n,v[DIM],cifra;
    i=1;
    printf("Inserire un numero di 5 cifre: ");
    scanf("%d",&n);
    fflush(stdin);
    while(n>0){
        cifra=n%10;
        n=n-cifra;
        n=n/10;
        v[DIM-i]=cifra;
        i++;
    }
    //visualizzazione dell'array
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    return 0;
}