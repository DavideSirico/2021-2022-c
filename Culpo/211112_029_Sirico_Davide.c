//211112_029_Sirico_Davide.c
/*
data una stringa s1, caricare il reverse di s1 in s2.
visualizzare le 2 stringhe.
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char str2[20],str1[]="Franco";

    for(i=0;i<strlen(str1);i++){
        str2[i]=str1[(strlen(str1)-i)-1];
    }
    str2[strlen(str2)]='\0';

    puts(str1);
    puts(str2);
    return 0;
}