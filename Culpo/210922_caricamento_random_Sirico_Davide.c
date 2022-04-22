//210922_caricamento_random_Sirico_Davide.c
#include <stdio.h>
#define DIM 6
int main()
{
    int v[DIM], i;
    srand(time(NULL));
    //caricamento interno random
    for (i=0;i<DIM;i++){
        v[i]=rand()%10+1; //rand()%range+start
    }
    //visualizzazione
    for (i=0;i<DIM;i++){
        printf("%d",v[i]);
    }

    return 0;
}