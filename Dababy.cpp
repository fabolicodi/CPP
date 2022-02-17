#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int x,y;
	float z,d,b;
	int a=60;
	printf("Unesi sekunde \n");
	scanf("%d",&x);
	printf("Unesi minute \n");
	scanf("%d",&y);
	if (x>59)
	printf("Neispravan unos stoopid !!!!\n");
	else{
	z=(float)x/60;
	d=z+y;
	b=(float)d/60;
	printf("To je toliko sati %.2f h \n",b);
}
	return 0;
	
	 
	
	
	
	
}
