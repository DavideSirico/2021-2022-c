//strncmp.c
#include <stdio.h>
#define DIM 80

int my_strncmp(char [], char [],int);
int main(){
    char s1[DIM],s2[DIM],flag;
    int n;
    printf("Inserire la 1 stringa: ");
    gets(s1);
    fflush(stdin);
    printf("Inserire la 2 stringa: ");
    gets(s2);
    fflush(stdin);
    printf("Inserire n: ");
    scanf("%d",&n);
    fflush(stdin);
    flag=my_strncmp(s1,s2,n);
    if(flag==0){
        printf("s1 e s2 sono uguali");
    } else if(flag<0){
            printf("%s e' minore di %s",s1,s2);
    } else {
        printf("%s e' maggiore di %s",s1,s2);
    }
    return 0;
}

int my_strncmp(char dest[DIM], char orig[DIM],int n){
    int i;
    i=0;
    while(((dest[i]!='\0') || (orig[i]!='\0')) || (i<n)){
            if(dest[i]<orig[i]){
                return -1;
            }
            if(dest[i]>orig[i]){
                return 1;
            }
            i++;
    }
    return 0;
}