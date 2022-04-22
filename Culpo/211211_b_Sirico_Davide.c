//confronti n(n-1)/2

//bubble sort
//tutti i confronti
#include <stdio.h>
#define DIM 10

void visualizza(int []);
void sort(int []);
void swap(int *,int *);
int main(){
    int i,v[]={6,54,32,23,62,62,1,3,123,4};

    visualizza(v);
    sort(v);
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

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int v[DIM]){
    int i,j,flag,temp;
    flag=0;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM-1-i;j++){
            if(v[j]>v[j+1]){
                swap(&v[j],&v[j+1]);
            }
        }
    }
}