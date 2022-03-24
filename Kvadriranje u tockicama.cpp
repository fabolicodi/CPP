#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int n=-1,i,x;
while (n<0){
	printf("Unesi neki broj\n");
	scanf("%d",&n);
	if(n<0) printf("Error\n");
}

for(i=n;i>0;i--){
	for(x=n;x>0;x--) 
		printf(".");
	printf("\n");
}
	

}
