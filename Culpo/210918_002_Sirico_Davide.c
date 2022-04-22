//210918_002_Sirico_Davide.c
/*
002 - dati 10 N inseriti esternamente,
viasualizzare la somma e dire se è > < = a 100
*/
#include <stdio.h>

int main(){
	int somma,numero,i;
	for (i=1;i<=10;i++){
		printf("Inserire numero: ");
		scanf("%d",&numero);
		somma = somma + numero;
	}
	if (somma>100){
		printf("La somma e' maggiore di 100");
	} else if (somma==100) {
		printf("La somma e' uguale a 100");
	} else {
		printf("La somma e' minore di 100");
	}
	
	return 0;
}
