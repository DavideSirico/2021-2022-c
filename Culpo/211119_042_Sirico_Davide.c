//strlen
#include <stdio.h>
#define DIM 80

int my_strlen(char []);
int main(){
    char s[DIM];
    int i;
    printf("Inserire la 1 stringa: ");
    gets(s);
    fflush(stdin);
    i=my_strlen(s);
    printf("La stringa e' lunga=%d",i);
    return 0;
}

int my_strlen(char s[DIM]){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}