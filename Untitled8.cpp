#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

int a;
printf("Unesi kvadrant\n");
scanf("%d",&a);
switch (a){
	case 1:
		printf("x je pozitivan i y je pozitivan");
		break;
	case 2:
		printf("x je negativan, a y je pozitivan");
		break;
	case 3:
		printf("x je negativan i y je negativan");
		break;
	case 4:
		printf("x je pozitivan, y je negativan");
		break;
	default:
		printf("Krivi unos");

}
	
	
return 0;

}












