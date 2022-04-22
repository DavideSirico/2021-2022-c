/*
Stampa indirizzo, occupazione di memoria e valore
di alcune variabili.
*/
#include <stdio.h>
int main() {
    int a;

    a=12;
    printf("L'indirizzo di a e' %x, occupa %d bytes, il suo valore e' %d\n", &a, sizeof(a), a);



    return 0;
}
//usare unsigned int per usare tutta la memoria per i numeri naturali. 
