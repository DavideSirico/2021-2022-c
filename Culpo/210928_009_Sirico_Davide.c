//210922_009_Sirico_Davide.c
/*
009 - caricare un vettore v con DIM=10 con numeri random a piacere
- inserire un numero k
- determinare l'elemento di v piu' prossimo a k e la relativa posizione
*/
#include <stdio.h>
#define DIM 10

int main()
{
    int i,v[DIM],k,npross,dist,distamin,distposiz;
    srand(time(NULL));
    printf("Inserire numero K: ");
    scanf("%d",&k);
    fflush(stdin);
    for (i=0;i<DIM;i++){
        v[i]=rand()%100+1;

    }
    distamin=v[0]+k;
    for (i=1;i<DIM;i++){
    	if(k>v[i]){
            dist=k-v[i];
        } else {
            dist=v[i]-k; //(k-v[i])*-1
        }
        if(dist<distamin){
			distamin=dist;
            npross=v[i];
            distposiz=i;
        }
	}
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    printf("\ndistanza posizione=%d",distposiz+1);
    printf("\nprossimo=%d",npross);
    return 0;
}