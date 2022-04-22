//211001_011b_Sirico_Davide.c
/*Dichiarare un vettore v dimensionato DIM 10.
caricamento esterno: richiesto un elemento controlli, prima di inserirlo nel vettore, 
se e' già presente, nel qual caso chieda che l'elemento sia digitato di nuovo.
*/

#include <stdio.h>
#define DIM 10

int main(){
    int i,v[DIM],j,n,flag=0;
    for(i=0;i<DIM;i++){
        do{
            flag=0;
            printf("Enter number %d: ",i+1);
            scanf("%d", &n);
            fflush(stdin);
            for(j=0;j<i;j++){
                if(n==v[j]){
                    flag++;
                }
            }
        }while(flag!=0);
        v[i]=n;
    }
    for (i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    return 0;
}
