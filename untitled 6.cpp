#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
int a,b;
printf("Unesi 2 broja\n");
scanf("%d %d",&a,&b);
if (a>b)
printf("%d je veci od %d",a,b);
else
printf("%d je veci od %d",b,a);
return 0;

}
