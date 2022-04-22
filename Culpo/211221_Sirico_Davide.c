//confronti n(n-1)/2

//bubble sort
//tutti i confronti
#include <stdio.h>

void sort(char []);
void sortdecrescente(char []);
void swap(char *,char *);
int main(){
    char s[80]={"Marco MANGIONE"};
    puts(s);
    sort(s);
    puts(s);
    return 0;
}

void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(char s[80]){
    int i,j,dim;
    char box;
    for(dim=0;s[dim]!='\0';dim++);


    //TODO ordinare prima le lettere minuscole
    //e poi quelle maiuscole
    for(i=0;i<dim;i++){
        if(s[i]<=97){
            for(j=0;j<dim-1-i;j++){
                if(s[j]>s[j+1]){
                    swap(&s[j],&s[j+1]);
                }
            }
        }

    }
}