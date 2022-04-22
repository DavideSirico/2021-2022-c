/*
72> ADT simulato di uno stack mediante un array 
simuliamo DIM = 5
    printf("\n1 -> Aggiungi el" );
    printf("\n2 -> Estrai el");
    printf("\n3 -> Svuota stack");
    printf("\n4 -> Visualizza stack");
    printf("\n0 -> Esc");

primitive:
void push(element, stack);
element pop(stack);
boolean isEmpty(stack);
boolean isFull(stack);
int Top(stack);
void clear(stack)

NB: i controlli: ad es. prima di estrarre un el lo stack deve averne almeno uno
prima di aggiungere un el lo stack non deve essere pieno ... etc*/

#include <stdio.h>
#define DIM 5

void visualizza(int []);
void push(int,int []);
int pop(int []);
int isEmpty(int []);
int isFull(int []);
int Top(int []);
void clear(int []);

int main(){
    int n; 
    int opz;
    int v[DIM]={0,0,0,0,0};

    while(1){
        printf("\n1 -> Aggiungi el" );
        printf("\n2 -> Estrai el");
        printf("\n3 -> Svuota stack");
        printf("\n4 -> Visualizza stack");
        printf("\n0 -> Esc");
        printf("\n\nEffettua una scelta: ");
        scanf("%d",&opz);
        fflush(stdin);
        switch(opz){
            case 0:
                return 0;
                break;
            case 1:
                printf("\nInserisci un dato: ");
                scanf("%d",&n);
                fflush(stdin);
                push(n,v);
                break;
            case 2:
                pop(v);
                break;
            case 3:
                clear(v);
                break;
            case 4:
                visualizza(v);
                break;
            default:
                printf("\nopzione non valida\n");
                break;
        }
    }
    return 0;
}


void push(int ele,int v[DIM]){
    int i;
    if(isFull(v)!=0){
        for(i=DIM-2;i>=0;i--){
            v[i+1]=v[i];
        }
        v[0]=ele;
    } else {
        printf("la pila e' piena\n");
    }   
}

int pop(int v[DIM]){
    int i,temp;
    if(isEmpty(v)==0){    
        temp=v[0];
        for(i=0;i<DIM-1;i++){
            v[i]=v[i+1];
        }
        return temp;
    } else {
        printf("\n- Pila vuota\n");
        return 0;
    }
}
//se la pila e' vuota ritorna 1
int isEmpty(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        if(v[i]!=0){
            return 0;
        }
    }
    return 1;
}
//se la pila e' pina ritorn 1
int isFull(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        if(v[i]==0)
            return 1;
    }
    return 0;
}

int Top(int v[DIM]){
    return v[0];
}

void clear(int v[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        v[i]=0;
    }
    printf("\n-> Pila svuotata\n");
}

void visualizza(int v[DIM]){
    int i;
    if(isEmpty(v)==1){
        printf("Pila vuota");
    } else {
        for(i=0;i<DIM;i++)
            if(v[i]!=0)
                printf("\nindice i: %d elemento %d",i,v[i]);
    }
    putchar('\n');
}
