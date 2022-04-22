//211203_50_Sirico_Davide.c
/*
sorting di un array di stringhe
*/
#include <stdio.h>
#include <string.h>
#define DIM 5

int main(){
   int i,j;
   char s[DIM][25],temp[25];
   for(i=0;i<DIM;i++)
      gets(s[i]);

   for(i=0;i<DIM;i++)
      for(j=i+1;j<DIM;j++){
         if(strcmp(s[i],s[j])>0){
            strcpy(temp,s[i]);
            strcpy(s[i],s[j]);
            strcpy(s[j],temp);
         }
      }
   printf("Order of Sorted Strings:\n");
   for(i=0;i<DIM;i++)
      puts(s[i]);
   
   return 0;
}