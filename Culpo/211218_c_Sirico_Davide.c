#include <stdio.h>
#define DIM 10

void visualizza(int []);
void BubbleSort(int []);
int main(){
    int v[]={10,9,8,7,6,5,4,3,2,1};
    //int v[]={1,2,3,4,5,6,7,8,9,10};
    visualizza(v);
    BubbleSort(v);
    visualizza(v);
    return 0;
}

void BubbleSort(int v[DIM]){
    int flag,box,n,i,c=0;
    flag=1;
    n=DIM-2;
    while(flag==1){
        flag=0;
        for(i=0;i<n+1;i++){
            //c++;
            if(v[i]>v[i+1]){
                //swap
                box=v[i];
                v[i]=v[i+1];
                v[i+1]=box;
                flag=1;
            }
        }
        n=n-1;
    }
    //printf("%d ",c);
}

void visualizza(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}