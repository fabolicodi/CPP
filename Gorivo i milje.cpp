#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	

	int a,b,c,d;

	
	printf("Unesi broj galona goriva\n");
	scanf("%d",&a);
	printf("Unesi broj milja\n");
	scanf("%d",&b);	
	printf("Unesi broj koliko auto trosi milja po galonu\n");
	scanf("%d",&c);
	d=(float) (b/c)/a;
	
	if  (d>=1)
		printf("Ima dovoljno goriva");
	
	else
		printf("Nema dovoljno goriva");
			
	return 0;
	
	
}
