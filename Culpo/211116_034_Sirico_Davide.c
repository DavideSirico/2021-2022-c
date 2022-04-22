//211116_vocali_Sirico_Davide.c
/*
Conta il numero di vocali in una funzione da un stringa
*/

#include <stdio.h>
#include <string.h>

int vocali(char []);
int main(){
    char str[80];
    
    printf("Inserire una stringa: ");
    gets(str);
    printf("str: %d\n&str[0]: %d",str,&str[0]);
    printf("\nNumero vocali=%d",vocali(str));
    return 0;
}


int vocali(char str[]){
    int c,i;
    c=0;
    for(i=0;i<=strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o' ||  str[i]=='E' || str[i]=='O' || str[i]=='I' || str[i]=='U' || str[i]=='A'){
            c++;
        }
    }
    return c;
}