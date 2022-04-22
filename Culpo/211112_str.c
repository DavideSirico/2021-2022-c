#include <stdio.h>

int main(){
    //DICHIARAZIONE
    //caricamento implicito
    char str[]="ciao",str2[]="Franco";
    char str3[10];
    
    int i;
    //caricamento esplicito
    //char str[]={'c','i','a','o','\0'}  '\0'=0=NULL

    //INSERIMENTO
    
    gets(str); // si ferma con l'enter
    scanf("%s",str2); //si ferma allo space
    for(i=0;i<sizeof(str3)-1;i++){ //char by char
        str3[i]=getchar();
    }
    str3[i]='\0';


    //VISUALIZZAZIONE
    printf("%s",str2); //rimane sulla stessa linea
    puts(str); // a capo auto

    for(i=0;str3[i]!='\0';i++){ //char by char
        putchar(str3[i]);
    }
    return 0;
}