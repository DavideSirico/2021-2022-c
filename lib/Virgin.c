#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 10
void carica(int []);
void visualizza(int []);
int max(int []);
int main(){
	int v[DIM];
	carica(v);
	visualizza(v);
	putchar('\n');
	printf("Max=%d",max(v));

	return 0;
}
void carica(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		v[i]=rand()%10+1;
	}
}
void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%d ",v[i]);
	}
}
int max(int v[DIM]){
	int i,max;
	max=v[0];
	for(i=1;i<DIM;i++){
		if(v[i]>max){
			max=v[i];
		}
	}
	return max;
}
