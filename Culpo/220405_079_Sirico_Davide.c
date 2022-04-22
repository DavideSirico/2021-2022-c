/*79> 
int v[row];
int *pv;
pv=&v[0];
    
int m[row][col];
int *pm;
pm=&m[0][0];
  
caricare, visualizzare e trovare il max
USANDO SOLO ARITMETICA DEI PUNTATORI 
row e col sono chieste all'utente*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void carica_v(int *,int);
void visualizza_v(int *,int);
int max_v(int *,int);
int main(){
    srand(time(NULL));
    int row,col;
    printf("Inserisci numero righe: ");
    scanf("%d",&row);
    printf("Inserisci numero colonne: ");
    scanf("%d",&col);
    int v[row];
    int *pv;
    pv=&v[0];
    carica_v(pv,row);
    visualizza_v(pv,row);
    printf("Il massimo e': %d\n",max_v(pv,row));
    printf("\n\n\n\n");

    int m[row][col];
    int *pm;
    pm=&m[0][0];
    carica_m(pm,row,col);
    visualizza_m(pm,row,col);
    printf("Il massimo e': %d\n",max_m(pm,row,col));
    return 0;
}


void carica_v(int *pv,int row){
    int i;
    for(i=0;i<row;i++){
        *(pv+i)=rand()%100;
    }
    putchar('\n');
}

void visualizza_v(int *pv,int row){
    int i;
    for(i=0;i<row;i++){
        printf("%d ",*(pv+i));
    }
}

int max_v(int *pv,int row){
    int i;
    int max=*pv;
    for(i=1;i<row;i++){
        if(*(pv+i)>max){
            max=*(pv+i);
        }
    }
    return max;
}

void carica_m(int *pv,int row,int col){
    int i,j;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            *((j*col)+i+pv)=rand()%100;
}

void visualizza_m(int *pv,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",*((j*col)+i+pv));
        }
        putchar('\n');
    }
    putchar('\n');
}

int max_m(int *pv,int row,int col){
    int max=*pv;
    int i,j;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            if(*((j*col)+i+pv)>max)
                max=*((j*col)+i+pv);

    return max;
}