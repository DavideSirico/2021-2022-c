#include <stdio.h>
#define DIM 10

int main(){
    int i,flag,box,n,c,s;
    int v[DIM]={10,9,8,7,6,5,4,3,2,1};c=s=0;
    flag=1;
    n=DIM-1;
    while(flag){
        flag=0;
        for(i=0;i<=n;i++){
            c++;
            if(v[i]>v[i+1]){
                s++;
                box=v[i];
                v[i]=v[i+1];
                v[i+1]=box;
                flag=1;
            }
        }
        n=n-1;
    }

    printf("confronti: %d\n",c);
    printf("swap: %d\n",s);
    //visualizzazione dell'array
    for(i=0;i<DIM;i++){
        printf("%d ",v[i]);
    }
    
    return 0;
}
