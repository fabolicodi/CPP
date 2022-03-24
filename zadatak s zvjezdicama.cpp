#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int n=-1,i,x;
while (n<0){
	printf("Unesi neki broj\n");
	scanf("%d",&n);
	if(n<0) printf("Error\n");
}
printf("*\n");
for(i=1;i<n;i++){
for(x=1;x<n;x++)
printf("*");
printf("\n");
}
}
