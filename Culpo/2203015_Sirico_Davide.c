//TODO Finire
#include <stdio.h>
#include <string.h>
#define L 80
#define DIM 3

struct studente{
    char cognome[L];
    char nome[L];
    int voto_info;
    int voto_condotta;
};

int esiste(struct studente [],char [],char []);
void v_info(struct studente [],char);
void v_condotta(struct studente [],char [],char [],int);
void carica(struct studente [],int *);
int main(){
    int opz,i,c=0,voto;
    int *p_c=&c;
    char nome[L];
    char cognome[L];
    char segno;
    struct studente studenti[DIM];
    for(i=0;i<DIM;i++){
        studenti[i].voto_condotta=0;
        studenti[i].voto_info=0;
    }
    while(1){
        do{
            for(i=0;i<30;i++)
                putchar('\n');
            printf("1. Inserimento dei dati degli alunni;\n2. dato il nominativo di un alunno permetta di modificare solo il voto di condotta;\n3. Modifichi (incrementando o decrementando di un punto il voto di informatica di tutti gli alunni)\n0. Esc");
            printf("\nScelta: ");
            scanf("%d",&opz);
            fflush(stdin);
        }while(opz>3 || opz<0);
        switch (opz){
            case 0:
            visualizza(studenti);
                printf("Esiste: %d",esiste(studenti,"Ciao","Franco"));
                break;
            case 1:
                carica(studenti,p_c);
                break;
            case 2:
                do{
                    printf("\nNome: ");
                    gets(nome);
                    printf("Cognome: ");
                    gets(cognome);
                }while(esiste(studenti,nome,cognome)==-1);
                do{
                    printf("Voto: ");
                    scanf("%d",&voto);
                    fflush(stdin);
                }while(voto>10 || voto<1);
                v_condotta(studenti,nome,cognome,voto);
                break;
            case 3:
                do{
                    printf("\nIncrementare(+) o Decrementare(-): ");
                    scanf("%c",&segno);
                    fflush(stdin);
                }while(!(segno=='+' || segno=='-'));
                v_info(studenti,segno);
                break;
            default:
                printf("\nOpzione non valida");
                break;
        }
    }
    return 0;
}

void v_info(struct studente studenti[DIM], char segno){
    int i=0;
    while(i<DIM){
        if(studenti[i].voto_condotta!=0 && studenti[i].voto_info!=0){
            if(segno=='+'){
                studenti[i].voto_info++;
            } else {
                studenti[i].voto_info--;
            }
        }
        i++;
    }
}

//TODO condizione di uscita
void carica(struct studente studenti[DIM],int *p_c){
    int i,voto_info,voto_condotta;
    char nome[L],cognome[L];
    for(i=*p_c;i<DIM;i++){
        printf("\nNome: ");
        scanf("%s",studenti[i].nome);
        fflush(stdin);
        printf("Cognome: ");
        scanf("%s",studenti[i].cognome);
        fflush(stdin);
        do{
            printf("Voto info: ");
            scanf("%d",&studenti[i].voto_info);
            fflush(stdin);
        }while(studenti[i].voto_info>10 || studenti[i].voto_info<1);
        do{
            printf("Voto condotta: ");
            scanf("%d",&studenti[i].voto_condotta);
            fflush(stdin);
        }while(studenti[i].voto_condotta>10 || studenti[i].voto_condotta<1);
    }
    *p_c=i;
}

void v_condotta(struct studente studenti[DIM],char nome[L],char cognome[L],int voto){
    int i,pos;
    pos=esiste(studenti,nome,cognome);
    studenti[pos].voto_condotta=voto;
}

//TODO non funziona
int esiste(struct studente studenti[DIM],char nome[L],char cognome[L]){
    int i;
    for(i=0;i<DIM;i++){
        if((strcmp(nome,studenti[i].nome)==0) && (strcmp(cognome,studenti[i].cognome)==0)){
            return i; //posizione dell'alunno
        }
    }
    printf("L'alunno non esiste\n");
    return -1;
}

//TODO
void visualizza(struct studente studenti[DIM]){
    for(int i=0;i<DIM;i++){
        printf("\nNome: %s",studenti[i].nome);
        printf("\nCognome: %s",studenti[i].cognome);
        printf("\nCondotta: %s",studenti[i].voto_condotta);
        printf("\nInfo: %s",studenti[i].voto_info);
    }
    putchar('\n');
}