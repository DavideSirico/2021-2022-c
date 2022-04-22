//pw: K1sS
#include <stdio.h>
#define DIM 23
void quick(int [],int, int);
void scambia(int *, int *);
void visualizza(int []);
int main(){
	int v[DIM]={1,3,45,6,77,82,5,23,9,11,233,45,67,600,56,2234,56,7,77,878,1234,2,44};
	quick(v,0,DIM-1); //(1)
	visualizza(v);
	return 0;
}

void visualizza(int v[DIM]){
	int i;
	for(i=0; i<DIM; i++)
		printf("%d ", v[i]);
	putchar('\n');
}
void quick(int v[DIM], int sin, int des){
	int i, j, media;
	media= (v[sin]+v[des]) / 2; // (2)
	i = sin;
	j = des;
	do {
		while(v[i]<media) i++; // (4)
		while(media<v[j]) j--; // (5)
		if(i<=j) {
			scambia(&v[i], &v[j]);
			i++;
			j--;
		}
	}
	while (j>=i); // (3)
	if(sin<j) quick(v,sin,j); // (6)
	if(i<des) quick(v,i,des); // (7)
}

void scambia(int *a, int *b){
	int box;
	box = *a;
	*a = *b;
	*b = box;
}

(1) Viene chiamata la funzione con gli argomenti v (vettore da ordinare), 0 (indice più piccolo), DIM-1 (indice più grande).
(2) Si calcola il valore medio tra il primo elemento e l'ultimo
(3) fintanto che j>=i //TODO
(4) Si trova la posizione del primo valore più grande della media da sinistra verso destra
(5) Si trova la posizione del primo valore più piccolo della media da destra verso sinistra
(6) Se l'indice è maggiore della TODO
(7) TODO
(8) L'algoritmo parte andando a scambiare i valori più grandi della media con quelli più piccoli della media.
Dopo che l'indice che parte da sinistra (i) supera quello che parte da destra (j) la funzione viene richiamata
prendendo come punti più esterni la posizione dei i valori che superavano la media o la TODO
