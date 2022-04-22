//211113_31_Sirico_Davide.c
/*
emulare la funzione:
strlen(s)     Resituisce la lunghezza di s
*/


#include <stdio.h>

int main(){
    char str1[80];
    int i;

    gets(str1);

    for(i=0;str1[i]!='\0';i++);

    printf("La stringa è lunga=%d",i);
    return 0;
}