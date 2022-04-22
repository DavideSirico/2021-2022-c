/*65> Dato un numero n inserito esternamente calcolare la somma
dei primi N numeri pari (>0) positivi in maniera ricorsiva.*/
#include <stdio.h>

int pari_1(int);
int pari_2(int,int);
int main(){
    int n;
    int somma;
    somma=0;
    do{
        printf("N: ");
        scanf("%d",&n);
        fflush(stdin);
    }while(n<0);
    printf("\n%d",pari_1(n));
    return 0;
}

int pari_1(int n){
    if(n==0)
        return 0;
    else
        return(n*2+pari_1(n-1));
}

int pari_2(int n,int i){
    if(n==i)
        return(i*2);
    else 
        return(i*2+somma(n,i+1));
}
