#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 80
int count_char(char *str, char c);
int main(){
    char c;
    char *str;
    char stringa[L];
    printf("inserire stringa:");
    gets(stringa);
    str=&stringa[0];
    printf("inserire char:");
    scanf("%c", &c);
    printf("%d", count_char(str,c));
}
int count_char(char *str, char c){
    if(*str=='\0'){
        return 0;
    }else{
        if(*str==c){
            return count_char(str+1,c)+1;
        }else{
            return count_char(str+1,c);
        }
    }
}