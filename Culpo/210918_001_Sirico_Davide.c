//210918_001_Sirico_Davide.c
//001 - area rettangolo (con fflush(stdin) - sizeof())
#include <stdio.h>
int main()
{
	int base,altezza,area;
	
	printf("I byte di un int sono: %d\n",sizeof(base));
	
	printf("Rettangolo: ");
	scanf("%d",&base);
	fflush(stdin);
	scanf("%d",&altezza);
	area = base * altezza;
	printf("L'area del rettangolo = %d",area);	
	
	return 0;
}
