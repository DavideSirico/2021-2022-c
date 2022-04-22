//211123_044_Sirico_Davide.c
/*
Data una stringa s1 e una stringa s2, la funzione 
int cerca(char [], char [])
retistuisce l'indice d'inizio se s2 è contenuta in s1
altrimenti riorna 0.
(appena s2 è contenuta in s1 inutile procedere nella ricerca)
*/
#include <stdio.h>
#include <string.h>
#define DIM 80

int cerca(char [], char []);
int main(){
	char s1[80],s2[80];
	int r;

    printf("Inserire la prima stringa: ");
    gets(s1);
    printf("\nInserire la seconda stringa: ");
    gets(s2);
	r=cerca(s1,s2);
	if(r==0){
		printf("la stringa %s non e' contenuta in %s",s2,s1);
	} else {
		printf("indice di inizio = %d",r);
	}
	return 0;
}

int cerca(char s1[],char s2[]){
	int i,j,ind,flag;
    flag=0;
    i=0;
	do{
		if(s2[0]==s1[i]){
			ind=i;
			flag=0;
			for(j=1;s2[j]!='\0' && flag==0;j++){
				if(s2[j]!=s1[i+j]){
					flag=1;
					ind=0;
				}
			}
			if(ind!=0){
				return ind;
			}
		}
		i++;
	}while(s1[i]!='\0');
	return 0;
}