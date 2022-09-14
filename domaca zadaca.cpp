#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mnozenje (int x){
	return x+3;
}

int main(){
	
int a,b=10,c=3,d;
printf("Unesi u koje vrijeme kristina pocinje raditi\n");
scanf("%d",&a);
if (mnozenje(a)>10)
printf("Nece stici na vrijeme\n");
else
printf("Stici ce rijesti sve zadatke na vrijeme\n");
return 0;
}
