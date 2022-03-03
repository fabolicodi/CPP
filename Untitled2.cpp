#include <stdio.h>
#include <stdlib.h>

int main(){
	
printf(" -------------------------------\n");
printf("| \t\t\t\t|\n");
printf("| \t 1. Kvadrat\t\t|\n");
printf("| \t 2. Pravokutnikt \t|\n");
printf("| \t 3. Krug \t\t|\n");
printf("| \t\t\t\t|\n");	
printf(" -------------------------------\n");

int a,b,c,d,e;
float x=3.14;
scanf("%d",&a);
switch (a){
	case 1: 
	printf("Unesi stranicu kvadrata \n");
	scanf("%d",&b);
	b=b*b;
	printf("Povrsina kvadrata je %d",b);
	break;
	case 2:
		printf("Unesi stranice pravokutnika \n");
		scanf("%d %d",&c,&d);
		printf("Povrsina pravokutnika je %d",c*d);
		break;
	case 3:
		printf("Unesi polumjer kruga \n");
		scanf("%d",&e);
		printf("Povrsina kruga je %.2f \n", (float) e*e*x);
		break;
	default :
		printf("Krivi unos.");
	}
	
	return 0;
	

	
	
	
	
	
}
