#include <stdio.h>
#define DIM 10

void visualizza(int []);
void swap(int *,int *);
void insertionsort(int []);
int main(){
    int v[DIM]={1,6,3,9,73,10,18,41,102,6};
    int i;

    visualizza(v);
    insertionsort(v);
    visualizza(v);
    return 0;
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}

void insertionsort(int v[DIM]){
    int i,j;
	for(i=0;i<DIM;i++){
        j=i;
        while((j>0) && (v[j-1]>v[j])){
            swap(&v[j],&v[j-1]);
            j--;
        }
	}
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}