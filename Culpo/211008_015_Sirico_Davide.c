//211008_015_Sirico_Davide.c
/*015 - Caricare una matrice quadrata con DIM=10 con numeri random [1..9] nella parte superiore.
nella parte superiore inferiore gli elementi sono posti = 0

es con DIM=4

2 4 6 7
0 3 2 3
0 0 3 5
0 0 0 7	
*/
#include <stdio.h>
#define DIM 10

int main(){
    int m[DIM][DIM],i,j;
    srand(time(NULL));
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            if(i<=j){
                m[i][j]=rand()%9+1;
            } else {
                m[i][j]=0;
            }
        }
    }
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            printf("%2d",m[i][j]);
        }
        putchar('\n');
    }
    return 0;
}