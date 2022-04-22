#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//(sorting(vari titi),max,min,visualizza,carica)

void visualizza(int *,int); 
void carica(int *,int,int,int);
int max(int *,int);
int min(int *,int);
void bubble(int *,int,char);
void selection(int *,int,char);
void insertion(int *,int,char);
void swap(int *,int *);
int ricerca(int *,int,int,int);
void quick(int *,int,int);


// void visualizza_M(int **,int,int); 
// void carica_M(int **,int,int,int,int);
// int max_M(int *,int);
// int min_M(int *,int);

void visualizza_M(int *m,int ROW,int COL){
    int i,j;
    for(i=0;i<ROW*COL;i++){
        if(i%ROW==0){
            putchar('\n');
        }
        printf("%3d",*(m+i));
    }
}

void carica_M(int m[][4],int ROW,int COL,int min,int max){
    int i,j;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            m[i][j]=rand()%(max-min+1)+min;
}

void visualizza(int *v,int DIM){
	int i;
	for(i=0;i<DIM;i++)
		printf("%d ",v[i]);
	putchar('\n');
}

void carica(int *v,int DIM,int min,int max){
    int i;
    for(i=0;i<DIM;i++)
        v[i]=rand()%(max-min+1)+min;
}


int max(int *v,int DIM){
    int i,max=v[0];
    for(i=1;i<DIM;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

int min(int *v,int DIM){
    int i,min=v[0];
    for(i=1;i<DIM;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;
}

void bubble(int *v,int DIM, char opz){
    int i,j;
    if(opz=='d'){
        for(i=0;i<(DIM-1);i++)
            for(j=i+1;j<DIM;j++)
                if(v[i]<v[j])
                    swap(&v[i],&v[j]);
    } else if(opz=='c'){
        for(i=0;i<(DIM-1);i++)
            for(j=i+1;j<DIM;j++)
                if(v[i]>v[j])
                    swap(&v[i],&v[j]);
    } else {
        printf("errore");
    }
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void insertion(int *v,int DIM,char opz){
	int i,j,min;
    if(opz=='c'){
        for(i=1;i<DIM;i++){
            min=v[i];
            for(j=i-1;(j>=0) && (min<v[j]);j--)
                v[j+1]=v[j];
            v[j+1]=min;
        }
    } else if(opz=='d'){
        for(i=1;i<DIM;i++){
            min=v[i];
            for(j=i-1;(j>=0) && (min>v[j]);j--)
                v[j+1]=v[j];
            v[j+1]=min;
        }
    } else {
        printf("errore");
    }
}

void selection(int *v,int DIM,char opz){
	int i,j,imin,temp;
    if(opz=='c'){
        for(i=0;i<(DIM-1);i++){
            imin=i;
            for(j=i+1;j<DIM;j++){
                if(v[imin]>v[j]){
                    imin=j;
                }
            }
            if(i!=imin)
                swap(&v[i],&v[imin]);
        }
    } else if(opz=='d'){
        for(i=0;i<(DIM-1);i++){
            imin=i;
            for(j=i+1;j<DIM;j++){
                if(v[imin]<v[j]){
                    imin=j;
                }
            }
            if(i!=imin)
                swap(&v[i],&v[imin]);
        }
    } else {
        printf("errore");
    }
}


int ricerca(int *v,int sin,int des,int n){
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

void quick(int *v, int sin, int des){
	int i, j, media;
	media= (v[sin]+v[des]) / 2; // (2)
	i = sin;
	j = des;
	do {
		while(v[i]<media) i++; // (4)
		while(media<v[j]) j--; // (5)
		if(i<=j) {
			swap(&v[i], &v[j]);
			i++;
			j--;
		}
	}
	while (j>=i); // (3)
	if(sin<j) quick(v,sin,j); // (6)
	if(i<des) quick(v,i,des); // (7)
}