#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 10

void trova(int *,int *, int []);
int main(){
    int v[DIM];
    int i,n;
    char *p_a;
    p_a=&v[0];
    int *max,*min;
    
    trova(*max,*min,v);

    /*
    p_a++; == p_a=p_a+1;
    p_a+i; != p_a++;
    */
    for(i=0;i<DIM;i++){
        *(p_a+i)='a'+i; //caricamento con legge
        
        /*scanf("%d",&*(p_a+i));
        fflush(stdin);*/ //caricamento esterno
        
        //*(p_a+i)=rand()%10+1; //caricamento random
    }
    printf("\n%c\n",*p_a);
    putchar('\n');
    for(i=0;i<DIM;i++){
        printf("%c ",*p_a++);
    }
    return 0;
}


void trova(int *max, int *min, int v[DIM]){
    int i;
    max=v[0],
    min=v[0];
    for(i=1;i<DIM;i++){
        if(v[i]>*max){
            *max=v[i];
        }
        if(v[i]<*min){
            *min=v[i];
        }
    }
}