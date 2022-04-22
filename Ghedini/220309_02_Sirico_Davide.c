/*
2>
Scrivi un algoritmo che acquisisca una coppia di interi n
ed m con n≥m che sia in grado di eseguire in modo ricorsivo
il prodotto n·(n-1) ·… ·m
Se n=m deve essere restituito n.
*/
#include <stdio.h>

int coppia(int,int);
int main(){
    int n,m;
    printf("N: ");
    scanf("%d",&n);
    fflush(stdin);
    do{
        printf("M: ");
        scanf("%d",&m);
        fflush(stdin);
    }while(n<m);
    printf("\n%d",coppia(n,m));
    return 0;
}

int coppia(int n,int m){
    if(n==m){
        return n;
    }
    if(n>m){
        return(coppia(n-1,m)*n);
    }
}