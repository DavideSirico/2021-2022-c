//210929_001_Sirico_Davide.c
/*
- Caricare una matrice di dimensioni ROW x COL con numeri casuali tra 1 e 100
- Viaualizzare la matrice andando a capo dopo ogni riga
- Calcolare la somma di tutti gli elementi
- Calcolare la somma di una riga r inserita dall'utente
- Calcolare la media di una colonna c inserita dall'utente
*/
#include <stdio.h>
#define ROW 3
#define COL 3

int main(){
	int m[ROW][COL],i,j,r,c;
	float sommatot,media,sommarow,sommacol;
	sommatot=0;
	sommarow=0;
	sommacol=0;
	media=0;
	srand(time(NULL));

	printf("Inserire riga: ");
	scanf("%d", &r);
	fflush(stdin);
	printf("Inserire colonna: ");
	scanf("%d", &c);
	fflush(stdin);
	
	//caricamento
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			m[i][j]=rand()%99+1;
			}
		}
	printf("\n");
	//visualizzazione
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%2d ", m[i][j]);
			sommatot+=m[i][j];
			if(i==r){
				sommarow+=m[i][j];
			}
			if(j==c){
				sommacol+=m[i][j];
			}
		}
		printf("\n");
	}
	media=sommacol/COL;
	printf("\nSomma=%.0f",sommatot);
	printf("\nSomma riga=%.0f",sommarow);
	printf("\nMedia colonna=%.2f",media);
	return 0;
}
