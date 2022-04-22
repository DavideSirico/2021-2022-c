#include <stdio.h>
#define DIM 10
void quick(int [],int, int);
void scambia(int *, int *);
void visualizza(int []);
int main(){
	//int v[DIM]={1,3,45,6,77,82,5,23,9,11,233,45,67,600,56,2234,56,7,77,878,1234,2,44};
	int v[DIM]={1,9,8,7,6,5,4,3,2,5};
	quick(v,0,DIM-1); //(1)
	visualizza(v);
	// scanf("%d",&v[0]);
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
		if(i<=j){
			scambia(&v[i], &v[j]);
			i++;
			j--;
		}
		visualizza(v);
	} while (j>=i); // (3)
	if(sin<j) quick(v,sin,j); // (6)
	if(i<des) quick(v,i,des); // (7)
}

void scambia(int *a, int *b){
	int box;
	box = *a;
	*a = *b;
	*b = box;
}