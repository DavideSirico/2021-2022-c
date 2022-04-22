#include <stdio.h>
#include <time.h>


unsigned long long int fattoriale(unsigned long long int);
long int fibo(long int);
int main(){
    unsigned long long int n;
    n=20;
    printf("fattoriale di %llu e' %llu",n,fattoriale(n));
    return 0;
}

unsigned long long int fattoriale(unsigned long long int n){
    if(n==0){
        return 1;
    } else {
        return(n*fattoriale(n-1));
    }
}

long int fibo(long int n){
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    } else {
        return(fibo(n-1)+fibo(n-2));
    }
}
