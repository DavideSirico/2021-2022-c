/*struttura ha 4 campi
1° codice operazione 	Numerico e Automatico (1,2,3,4) Univoco, Progressivo;
2° descrizione		Nome del prodotto;
3° quantita		Numero di prodotti;
4° costo		Costo del fornitore;

Array di struttura

Per ogni prodotto il totale speso.
Quantita*costo;

============================================
1
BIC
10
15
============================================
2
MATITA
5
3
============================================
3
BIC
10
13
============================================
4
GOMMA
5
6

do while(esc)

BIC 	280
GOMMA 	30
MATITA 	15*/

#include <stdio.h>
#include <string.h>
#define DIM 4

struct prod{
    int codop;
    char desc[20];
    int quantita;
    int costo;
};
//TODO completare ultima parte
void carica_files(struct prod Prodotti[DIM]);
void confronta(struct prod Prodotti[DIM]);
void costo(struct prod Prodotti[DIM]);
void sort(struct prod Prodotti[DIM]);
void carica(struct prod Prodotti[DIM]);
int main(){
    struct prod Prodotti[DIM];
    carica_files(Prodotti);
    confronta(Prodotti);
    return 0;
}

/*
void carica(struct prod Prodotti[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        Prodotti[i].codop=i+1;
        printf("Inserire i dati del %d prodotto",i+1);
        
        printf("\n\tInserire il nome: ");
        scanf("%s",Prodotti[i].desc);
        //fflush(stdin);
        printf("\n\tInserire la quantita': ");
        scanf("%d",&Prodotti[i].quantita);
        //fflush(stdin);
        printf("\n\tInserire il costo: ");
        scanf("%d",&Prodotti[i].costo);
        //fflush(stdin);
        putchar('\n');
    }
}
*/

void carica_files(struct prod Prodotti[DIM]){
	FILE *in;
	int tcosto,tquantita,i;
	char tnome[20];
	in=fopen("C:\\Users\\david\\Desktop\\files\\input.txt","r");
	for(i=0;i<DIM;i++){	
        Prodotti[i].codop=i+1;
		fscanf(in,"%s",tnome);
		strcpy(Prodotti[i].desc,tnome);
		fscanf(in,"%d",&tcosto);
		Prodotti[i].costo=tcosto;
		fscanf(in,"%d",&tquantita);
		Prodotti[i].quantita=tquantita;
	}
    fclose(in);
}

void sort(struct prod Prodotti[DIM]){
    int i,j;
    char temp[20];
    for(i=0;i<DIM-1;i++){
        for(j=i+1;j<DIM;j++){
            if(strcmp(Prodotti[i].desc,Prodotti[j].desc)>0){
                strcpy(temp,Prodotti[i].desc);
                strcpy(Prodotti[j].desc,Prodotti[i].desc);
                strcpy(Prodotti[j].desc,temp);
            }
        }
    }
}

void confronta(struct prod Prodotti[DIM]){
    int i,c,somma;
    somma=0;
    sort(Prodotti);
    for(i=0;i<DIM;i++){
        while(strcmp(Prodotti[i].desc,Prodotti[i+1].desc)==0){
            somma=somma+(Prodotti[i].costo*Prodotti[i].quantita);
            //i++;
        }
        printf("Costo del prodotto %d e' %d\n",Prodotti[i].codop,somma);
        somma=0;
    }
}