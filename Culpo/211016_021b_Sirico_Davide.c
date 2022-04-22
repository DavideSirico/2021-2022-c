//211016_021b_Sirico_Davide.c
/*
Caricare un vettore v di DIM=20 con i primi DIM numeri della successione di FIBONACCI.
Visualizzare un vettore v.

1 1 3 5 8 13 21 34 55 ...
(NB: esiste un altro numero palindromo nella successione, dopo il 55?)
*/
#include <stdio.h>

int main(){
    unsigned long long n1,n2,f,i,temp,rev,cifra,npal;
    npal=0;
    n1=1;
    n2=1;
    i=0;
    while (npal<2){
        //trovo il prossimo numero della sequenza
        f=n1+n2;
        n2=n1;
        n1=f;   
        temp=f;
        rev=0;
        if(f>9){
            while(f>0){
                cifra=f%10;
                rev=rev*10+cifra;
                f=f/10;
            }
        }
        if(temp==rev){
            putchar('\n');
            printf("Il numero %llu e' palindromo",temp);
            printf(" e si trova nella %llu posizione della successione di fibonacci",i);
            putchar('\n');
            npal++;
        }
        i++;
    }
    return 0;
}