//211013_matrice_Sirico_Davide.c
/*caricare una matrice quadrata di DIM=10 con valori casuali da 1 a 100.
Visualizzare la matrice
Scambiare o invertire la riga 0 con la riga 1
Visualizzare la matrice
*/
#include <stdio.h>
#define DIM 10

int main(){
	int m[DIM][DIM],i,j,temp;
	srand(time(NULL));
	//caricamento random della matice
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			m[i][j]=rand()%100+1;
		}
	}
	//visualizzazione della matrice
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("%3d",m[i][j]);
		}
		putchar('\n');
	}
	//swap righe
	for(i=0;i<DIM-1;i++){
		if(i%2==0){
			for(j=0;j<DIM;j++){
				temp=m[i][j]; //memorizzazione della riga pari
				m[i][j]=m[i+1][j]; //swap riga pari e riga dispari
				m[i+1][j]=temp; //assegnazione della riga dispari
			}
		}
	}
	//visualizzazione della matrice
	putchar('\n');
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("%3d",m[i][j]);
		} 
		putchar('\n');
	}
	return 0;
}