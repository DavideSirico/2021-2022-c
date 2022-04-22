// 211001_011_Sirico_Davide.c

/*
Dichiarare un vettore v dimensionato DIM 10.
caricamento esterno: richiesto un elemento controlli, prima di inserirlo
nel vettore, se è già presente, nel qual caso chieda che l’elemento 
sia digitato di nuovo.
*/

#include <stdio.h>
#define DIM 10

int main(){
	int v[DIM], n, flag, i, j;
	
	for(i=0; i<DIM; i++){
		do{
			flag=0;
			printf("Inserisci un numero %d: ", i+1);
			scanf("%d", &n);
			fflush(stdin);
			for(j=0; j<i; j++){
				if(v[j]==n){
					flag++;
				}
			}
		}while(times!=0);
		v[i] = n; 
	}
	for(i=0; i<DIM; i++){
		printf("%2d ", v[i]);
	}
}