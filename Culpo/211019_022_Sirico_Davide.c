//211019_020_Sirico_Davide.c
/*Scrivere un programma che, letti gli elementi di due vettori v e v2 di lunghezza 5,
determini il vettore w di lunghezza 10 ottenuto "appendendo" gli elementi di v2 a v
Visualizzare v, v2 e w*/

#include <stdio.h>
#define DIM 5
int main(){
	char v[DIM]={'P','R','O','V','A'},v2[DIM]={'E','S','A','M','E'},w[DIM+DIM];
	int i,j;
	j=0;
	//appendamento
	for(i=0;i<DIM;i++){	
		w[j]=v[i];
		j++;
	}
	for(i=0;i<DIM;i++){	
		w[j]=v2[i];
		j++;
	}
	//visualizzazione array v
	for(i=0;i<DIM;i++){
		printf("%c",v[i]);
	}
	putchar('\n');
	//visualizzazione array v2
	for(i=0;i<DIM;i++){
		printf("%c",v2[i]);
	}
	putchar('\n');
	//visualizzazione array w
	for(i=0;i<DIM+DIM;i++){
		printf("%c",w[i]);
	}
	return 0;
}
