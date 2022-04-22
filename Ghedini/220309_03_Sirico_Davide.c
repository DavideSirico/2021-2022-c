/*
3>
Scrivere una funzione che riceva in ingresso un double b (base) ed un intero e
(esponente) che restituisca il valore della potenza be usando ricorsivamente l’operazione: be=b·b (e-1).
NB senza usare la libreria math.h per le funzioni matematiche. 
*/
#include <stdio.h>

int potenza(double, int);
int main(){
    double b;
    int e;
    printf("Base: ");
    scanf("%lf",&b);
    fflush(stdin);

    printf("Esponente: ");
    scanf("%d",&e);
    fflush(stdin);

    printf("Ris: %d",potenza(b,e));
    return 0;
    
}

int potenza(double b, int e){
    if(e==0){
        return 1;
    }
    if(e>0){
        return(potenza(b,e-1)*b);
    }
}