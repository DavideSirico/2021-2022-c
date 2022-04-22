#include <stdio.h>

int somma(int,int);
int main(){
    int n1,n2;
    printf("n1: ");
    scanf("%d",&n1);
    fflush(stdin);
    printf("n2: ");
    scanf("%d",&n2);
    fflush(stdin);
    printf("Somma=%d",somma(n1,n2));
    return 0;
}

int somma(int n1,int n2){
    if((n1+1)==n2){
        return 0;
    } else {
        return((n1+1)+somma(n1+1,n2));
    }    
}
