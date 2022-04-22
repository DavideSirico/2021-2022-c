//211001_011_Sirico_Davide.c
/*Dichiarare un vettore v dimensionato DIM 10.
caricamento esterno: richiesto un elemento controlli, prima di inserirlo nel vettore, 
se e' già presente, nel qual caso chieda che l'elemento sia digitato di nuovo.
*/

#include <stdio.h>
#define DIM 10

int main(){
	int a[DIM],i,j;
	srand(time(NULL));
	for(i=0;i<DIM;i++){
		printf("Inserire n: ");
		scanf("%d", &a[i]);
		fflush(stdin);
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				i--;
			}
		}
	}
	for (i=0;i<DIM;i++){
		printf("%d ",a[i]);
	}
	return 0;
}