#include <stdio.h>

int somma(int,int);
int main(){
    int a,b;
    a=5;
    b=7;
    printf("%d\n",somma(a,b));
    printf("%d",somma(5,1));
}
int somma(int a,int b){
    int s;
    s=a+b;
    return s;
}