#include <stdio.h>
#define DIM 10

int visualizza_p(int []);
int visualizza(int [],int);
int main(){
    int v[DIM]={1,2,4,5,6,4,3,2,3,3};
    //visualizza(v,0);
    visualizza_p(v);
    return 0;
}
//TODO senza int i con i puntatori
int visualizza(int v[DIM],int i){
    if(i==DIM){
        return 0;
    } else {
        printf("%d ",v[i]);
        return(visualizza(v,i+1));
    }
}

int visualizza_p(int v[DIM]){
    if(visualizza_p(v)==DIM){
        return 0;
    } else {
        printf("%d ",v[visualizza_p(v)]);
        return(visualizza_p(v)+1);
    }
}