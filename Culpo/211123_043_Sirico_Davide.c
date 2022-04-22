//211123_043_Sirico_Davide.c
/*
Data una stringa s contare quante cifre ci sono.
*/
#include <stdio.h>

int main(){
    int i,c;
    char s[80];
    c=0;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=48 && s[i]<=57){
            c++;
        }
    }
    printf("Numero cifre=%d",c);
    return 0;
}
