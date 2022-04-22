//211008_008b_Sirico_Davide.c
/*Caricare un vettore v dimensionato DIM=10.
Visualizzarolo.
Scambiare la posizione max con la posizione del min(on place).
Visualizzzarlo nuovamente.
Esempio 1 2 3 21 4 5 6 7 8 9
        21 2 3 1 4 5 6 7 8 9
*/
#include <stdio.h>
#define DIM 10

int main(){
    int v[DIM],i,posmax,posmin,max,min;
    srand(time(NULL));
    //caricamento array
    for (i=0;i<DIM;i++){
        v[i]=rand()%10+1;
    }
    //visualizza l'array
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    //ricerca max min
    max=v[0];
    min=v[0];
    posmax=posmin=0;
    for(i=1;i<DIM;i++){
        if(v[i]>max){
            max=v[i];
            posmax=i;
        }
        if(v[i]<min){
            min=v[i];
            posmin=i;
        }
    }
    //swap max min
    v[posmin]=max;
    v[posmax]=min;
    putchar('\n');
    //visualizza array
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    return 0; 
}
