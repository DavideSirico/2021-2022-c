#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 10

void trova(int *,int *, int []);
int main(){
    int v[DIM];
    srand(time(NULL));
    int i;
    int *max,*min;
    for(i=0;i<DIM;i++){
        v[i]=rand()%10+1;
    }
    trova(max,min,v);
    printf("Max: %d, Min: %d",*max,*min);
    

    return 0;
}


void trova(int *max, int *min, int v[DIM]){
    int i;
    max=&v[0];
    min=&v[0];
    for(i=1;i<DIM;i++){
        if(v[i]>*max){
            *max=v[i];
        }
        if(v[i]<*min){
            *min=v[i];
        }
    }
}