//211124_045_Sirico_Davide.c
/*
Progettare e realizzare una funzione che effettui il controllo di validità (data entry) della data immessa nella forma gg/mm/aaaa.
1 se valida
0 se non valida
*/

#include <stdio.h>

int data(int, int, int);
int bisestile(int);
int main(){
    int gg1,gg2,mm1,mm2,aaaa1,aaaa2;
    int max,n;
    do{
        putchar('\n');
        printf("Inserire giorno 1:");
        scanf("%d", &gg1);
        fflush(stdin);
        
        printf("Inserire mese 1:");
        scanf("%d", &mm1);
        fflush(stdin);

        printf("Inserire anno 1:");
        scanf("%d", &aaaa1);
        fflush(stdin);
    }while(!data(gg1, mm1, aaaa1));
    printf("\nData 1 valida");
    do{
        putchar('\n');
        printf("Inserire giorno 1:");
        scanf("%d", &gg2);
        fflush(stdin);
        
        printf("Inserire mese 2:");
        scanf("%d", &mm2);
        fflush(stdin);

        printf("Inserire anno 3:");
        scanf("%d", &aaaa2);
        fflush(stdin);
    }while(!data(gg2, mm2, aaaa2));
    printf("\nData 2 valida");
    return 0;
}


int bisestile(int a){
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                return 1;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int data(int gg, int mm,int aa){
	int v[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(aa<0){
		printf("Data non esistente");
		return 0;
	}
    if(bisestile(aa)){
        v[2]=29;
    }
	if(mm>12 || mm<=0){
		printf("Data non esistente");
		return 0;
	}
	if(gg>v[mm]){
		printf("Data non esistente");
		return 0;
	}
	return 1;
}