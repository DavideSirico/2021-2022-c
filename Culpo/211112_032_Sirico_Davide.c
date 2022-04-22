//211112_032_Sirico_Davide.c
/*
data una stringa s1, copiare in una stringa s2 mettendo le vocali alla fine (sia MAIUSCOLE che minuscole! - ovviamente la lunghezza di s2 è uguale a quella di s)
es: "Mio nonno" -> "M nnniooo"
*/

#include <stdio.h>
#include <string.h>
int main(){
    char s1[80],s2[80],i,v,c;
    v=0;
    c=0;
    printf("Inserire la prima stringa: ");
    gets(s1);
    for(i=0;i<strlen(s1);i++){
        if(s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='u' && s1[i]!='o' &&  s1[i]!='E' && s1[i]!='O' && s1[i]!='I' && s1[i]!='U' && s1[i]!='A'){
            s2[c]=s1[i];
            c++;
        }
    }
    for(i=0;i<sizeof(s1)-1;i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='u' || s1[i]=='o' ||  s1[i]=='E' || s1[i]=='O' || s1[i]=='I' || s1[i]=='U' || s1[i]=='A'){
            s2[c]=s1[i];
            c++;
        }
    }
    s2[c]='\0';
    puts(s2);

    return 0;
}