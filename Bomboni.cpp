#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int n,b,c,d,e;
	printf("Unesi broj bombona \n",n);
	scanf("%d",&n);
	float a=0.25;
	b=n*a;
	n=n-b;
	printf("Marko je pojeo %d bombona \n",b);
	c=n*a;
	n=n-c;
	printf("Karla je pojela %d bombona\n",c);
	d=n*a;
	n=n-d;
	printf("Ivana je pojela %d bombona\n",d);
	e=n*a;
	n=n-e;
	printf("Petar je pojeo %d bombona\n",e);
	return 0;
	
}
