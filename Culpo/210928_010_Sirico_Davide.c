//210929_010_Sirico_Davide.c
/*
010 - caricare un vettore let con DIM=10 con lettere maiuscole (HELP: dichiarare quindi  char let[DIM])
- visualizzare il numero complessivo delle vocali presenti nel vettore.
*/

#include <stdio.h>
#define DIM 10

int main()
{
    int i,j,c;
    char let[DIM], vocali[5];
    srand(time(NULL));
	vocali[0] = 65;
	vocali[1] = 69;
	vocali[2] = 73;
	vocali[3] = 79;
	vocali[4] = 85;
    for(i=0;i<DIM;i++){
    	let[i]=rand()%26+65;
    	for(j=0;j<5;j++){
    		if(let[i]==vocali[j]){
    			c=c+1;
			}
		}
	}
	for(i=0;i<DIM;i++){
		printf("%c ", let[i]);
	}
	printf("\nvocali=%d", c);
	
    return 0;
}