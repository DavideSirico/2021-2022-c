#include <stdio.h>
#define DIM 5
int main()
{
    int v[DIM], i;
    //caricamento interno
    for (i=0;i<DIM;i++){
        v[0]=1;
        v[1]=3;
        v[2]=5;
        v[3]=i*2;
    }
    //visualizzazione
    for (i=0;i<DIM;i++){
        printf("%d",v[i]);
    }
    return 0;

}