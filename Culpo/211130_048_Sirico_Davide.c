//211130_48_Sirico_Davide.c
/*
inserire un array di stringhe dimensionato DIM
cercare la stringa se esiste o se non esiste
Esce con Enter
*/

#include <stdio.h>
#include <string.h>
#define DIM 5
int main(){
    //array di stringhe
    char parole[DIM][80],input[80];
    int i,j,flag; 
    flag=0;
    //caricamento di 5 stringhe
    printf("Inserire 5 parole: ");
    for(i=0;i<DIM;i++){
        gets(parole[i]);
    }
    do{
        //input della parole da cercare
        printf("\nInserire parola da cercare: ");
        gets(input);
        if(input[0]=='\0'){
            break;
        }
        for(i=0;(i<DIM) && (flag==0);i++){
            if(strcmp(parole[i],input)==0){
                printf("Parola trovata\n");
                flag=1;
            }
        }
        
    }while(1);
    return 0;
}