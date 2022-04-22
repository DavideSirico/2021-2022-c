/*1>
Scrivere un programma che sia in grado di stabilire
se un dato numero intero è primo oppure no, utilizzando la ricorsione
senza usare i cicli.
*/
#include <stdio.h>

int primo(int,int);
int main(){
    int n;
    printf("N: ");
    scanf("%d",&n);
    fflush(stdin);

    if(primo(n,2)==0){
        printf("Il numero non e' primo");
    } else {
        printf("Il numero e' primo");
    }
    return 0;
}

int primo(int n,int i){
    if(i==n-1){
        return 1;
    }
    if(n%i==0){
        return 0;
    } else {
        primo(n,i+1);
    }
}