/*65> Dato un numero n inserito esternamente calcolare la somma
dei primi N numeri pari (>0) positivi in maniera ricorsiva.*/
#include <stdio.h>

int pari(int);
int main(){
    int n;
    int somma;
    somma=0;
    do{
        printf("N: ");
        scanf("%d",&n);
        fflush(stdin);
    }while(n<0);
    printf("\n%d",pari(n));
    return 0;
}

int pari(int n){
    if(n==0){
        return 0;
    } else if(n%2==0){
        return pari(n-1)+pari(n);
    }
    else {
        return n-1;
    }
}



//fibonacci

