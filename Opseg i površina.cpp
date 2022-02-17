#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
	
	int a;
	int b;
	int c;
	int d;

	printf("Unesi duljinu stranica \n");
	scanf("%d %d",&a,&b);
	if (a>b)
	printf("Površina je %d",a*b);
	else
	printf("Opseg je %d",(a+a+b+b));	

	return 0;
	
		
	
	
	
	
	
}
