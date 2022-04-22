//211019_023_Sirico_Davide.c
/*Scrivere un programma che inizializi e quindi visualizzi una
matrice m di ROW=8 e COL=11 di int in cui ciascun elemento
e' dato dalla somma dei propri indici*/
#include <stdio.h>
#define ROW 8
#define COL 11

int main()
{
	int m[ROW][COL],i,j;
	
	//caricamento m
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			m[i][j]=i+j;	
		}
	}

	//visualizzazione della matrice
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%2d",m[i][j]);	
		}
		putchar('\n');
	}

	return 0;
}
