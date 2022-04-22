//211112_028_Sirico_Davide.c
/*
Emulare la funzione:
strcpy(s1, s2)   Copia s2 in s1
visualizzare le 2 stringhe.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char str1[]="Franco",str2[]="Foresta";
    //copia con funzione
    //strcpy(str2, str1);
    for(i=0;i<strlen(str2);i++){
        str2[i]=str1[i];
    }
    puts(str1);
    puts(str2);
    return 0;
}