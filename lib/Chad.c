#include "lib.c"
#define DIM 10

int main() {
    srand(time(NULL));
    int v[DIM];
    carica(v, DIM, 10, 50);
    visualizza(v, DIM);
    putchar('\n');
    printf("max=%d", max(v, DIM));
    for
    return 0;
}