#include <stdio.h>
#define DIM 5
int main()
{
    int v[DIM], i;
    //caricamento esterno
    for (i=0;i<DIM;i++){
        printf("%d elemento: ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
    //visualizzazione
    for (i=0;i<DIM;i++){
        printf("%d",v[i]);
    }


}