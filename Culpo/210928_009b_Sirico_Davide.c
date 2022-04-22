//210922_009_Sirico_Davide.c
/*
009 - caricare un vettore v con DIM=10 con numeri random a piacere
- inserire un numero k
- determinare l’elemento  di v più prossimo a k e la relativa posizione
*/
#include <stdio.h>
#define DIM 2

int main()
{
    int i,v[DIM],k,prossimo,distanza,distanzamin,distanzaposizione;
    distanzamin = 10;
    printf("Inserire numero K: ");
    scanf("%d",&k);

    v[0]=-20;
    v[1]=10;
    for (i=0;i<DIM;i++){
        if(k>v[i]){
            distanza=k-v[i];
            if(distanza<distanzamin){
                distanzamin=distanza;
                prossimo=v[i];
                distanzaposizione=i;
            }
        } else {
            distanza=v[i]-k;
            if(distanza<distanzamin){
                distanzamin=distanza;
                prossimo=v[i];
                distanzaposizione=i;
            }
        }

    }
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    printf("\ndistanza posizione=%d",distanzaposizione+1);
    printf("\nprossimo=%d",prossimo);
    return 0;
}