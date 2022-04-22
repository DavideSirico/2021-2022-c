//211109_cornice_mat_Sirico_Davide.c
/*
azzerare una matrice quadrata DIM 10 e visualizzarla
caricare la cornice con numeri sequenziali e visualizzare
*/
#include <stdio.h>
#define DIM 10

void visualizza(int [][DIM]);
void cornice(int [][DIM]);
void azzera(int [][DIM]);
int main(){
    int m[DIM][DIM];
    azzera(m);
    cornice(m);
    putchar('\n');
    visualizza(m);
    return 0;
}

void azzera(int m[DIM][DIM]){
    int i,j;
    for(i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            m[i][j]=0;
}
void cornice(int m[DIM][DIM]){
    int i,j,c,a;
    c=1;
    a=0;
    for(j=0;j<DIM/2-1;j++){
        for(i=0;i<DIM;i++){
            m[a][i]=c;
            c++;
        }
        c=c-1;
        for(i=0;i<DIM;i++){
            m[i][DIM-1-a]=c;
            c++;
        }
        c=c-1;
        for(i=DIM-1;i>=0;i--){
            m[DIM-1-a][i]=c;
            c++;
        }
        c=c-1;
        for(i=DIM-1;i>0;i--){
            m[i][a]=c;
            c++;
        }
        a++;
    }
}


    /*int i,c,n,j,f,a;
    n=0;
    c=1;
    f=0;
    a=1;
    for(i=0;i<DIM-1;i++){
        //TOP
        m[0][i]=i+1;
        //RIGHT
        m[i][DIM-1]=i+DIM;
        //BOT
        m[DIM-1][DIM-i-1]=DIM+DIM+i-1;
        //LEFT
        m[DIM-i-1][0]=(DIM-1)*3+i+1;
    }
    n=(DIM-1)*4;
    for(j=1;j<DIM/2+1;j++){
        for(i=1;i<DIM-2;i++){
            //TOP
            m[1][i]=m[0][i-1]+n;
            //RIGHT
            m[i][DIM-2]=m[i][DIM-1]+n-j+2;
            //BOT
            m[DIM-2][DIM-i-1]=m[DIM-1][DIM-i-1]+n-(i+4);
            //LEFT
            m[DIM-i-1][1]=m[DIM-i-1][0]+n-(i+6);
        }
    }*/

//TODO FARE IL PROGRAMMA

void visualizza(int m[DIM][DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("%4d",m[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}
