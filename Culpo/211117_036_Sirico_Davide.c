//211117_036_Sirico_Davide.c
/*
Scrivere una funzione che visualizzi un rettangolo di row righe per col colonne di *.
---------
void rettangolo(int, int);
*/
#include <stdio.h>

void rettangolo(int,int);
int main(){
    int row,col;
    do{
        printf("\nInserire righe: ");
        scanf("%d",&row);
        fflush(stdin);
    }while(row<0);
    do{
        printf("\nInserire colonne: ");
        scanf("%d",&col);
        fflush(stdin);
    }while(col<0);
    putchar('\n');
    
    rettangolo(row,col);
    return 0;
}

//
void rettangolo(int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("*");
        }
    printf("\n");
    }
}