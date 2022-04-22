#include <stdio.h>
#define L 80

int count_char(char *, char);
int main(){
    char s[L];
    char *str;
    char c;
    printf("String: ");
    gets(s);
    printf("Char: ");
    scanf("%c",&c);
    str=&s[0];
    printf("Number of char: %d",count_char(str,c));
    return 0;
}

int count_char(char *str, char c){
    if(*str=='\0')
        return 0;
    else if(*str==c)
        return(count_char((str+1),c)+1);
    else 
        return(count_char((str+1),c));
}