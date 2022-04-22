#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void visualizza(int m[][DIM]);
void carica(int m[][DIM]);

int main(){
    int m[DIM][DIM];

    carica(m);
    visualizza(m);
    return 0;
}

void visualizza(int m[DIM][DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("%2d",m[i][j]);
        }
        putchar('\n');
    }
}
void carica(int m[DIM][DIM]){
    int i,j;
    srand(time(NULL));
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            m[i][j]=rand()%9+1;
        }
    }
}