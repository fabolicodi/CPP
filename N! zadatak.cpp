#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
int n=-1, i, fac=1;

while (n<0){
	printf("Unesi neki broj\n");
	scanf("%d",&n);
	if(n<0) printf("Error\n");
}
i=n;
while(i) fac*=i--;
printf("faktorijel broja %d je %d",n,fac);

return 0;
}
