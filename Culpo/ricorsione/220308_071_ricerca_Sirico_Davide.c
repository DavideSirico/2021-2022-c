#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define DIM 10

void visualizza(int []);
void sort(int [],int,int);
void carica(int []);
int ricerca(int [],int,int,int);
void swap(int *,int *);
int main(){
    srand(time(NULL));
    int v[DIM];
    int n;
    carica(v);
    sort(v,0,DIM-1);
    visualizza(v);
    printf("Numero: ");
    scanf("%d",&n);
    fflush(stdin);
    if(ricerca(v,0,DIM-1,n)==0) //0=trovato -1=non trovato
        printf("\nValore %d trovato",n);
    else 
        printf("\nValore %d non trovato",n);
    return 0;
}

void carica(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++)
        v[i]=rand()%(100-0-1)+0;
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++)
        printf("%d ",v[i]);
    putchar('\n');
}

void sort(int v[DIM],int sin,int des){
    int media,i,j;
    media=(v[sin]+v[des])/2;
    i=sin;
    j=des;
    do{
        while(v[i]<media)
            i++;
        while(media<v[j])
            j--;
        if(i<=j){
            swap(&v[i],&v[j]);
            i++;
            j--;
        }
    }while(j>=i);
    if(sin<j)
        sort(v,sin,j);
    if(i<des)
        sort(v,i,des);
}

void swap(int *a, int *b){
	int box;
	box = *a;
	*a = *b;
	*b = box;
}

int ricerca(int v[DIM],int sin,int des,int n){
    int media;
    media=(sin+des)/2;
    if(v[media]==n)
        return 0;
    else if(sin==des)
        return -1;
    else if(n>v[media])
        ricerca(v,media+1,des,n);
    else
        ricerca(v,sin,media-1,n);
}