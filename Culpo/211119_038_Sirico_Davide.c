//strncpy.c
#include <stdio.h>
#define DIM 80

void my_strncpy(char [], char [], int);
int main(){
    char s1[DIM],s2[DIM],n;

    printf("Inserire la 1 stringa: ");
    gets(s2);
    fflush(stdin);
    printf("Inserire la 2 stringa: ");
    gets(s1);
    fflush(stdin);
    printf("Inserire n: ");
    scanf("%d",&n);
    fflush(stdin);
    my_strncpy(s1,s2,n);
    puts(s2);
    return 0;
}

void my_strncpy(char s1[DIM], char s2[DIM], int n){
    int i;

    for(i=0;i<n || s1[i]!='\0' || s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
}