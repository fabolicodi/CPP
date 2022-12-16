#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pravokutnik{
	int r;
	int b;
	int g;
};

int main (void){
	int i,sum=0;
	
	
	struct pravokutnik pk[4];
	for (i=0;i<4;i++){
		scanf("%d %d %d",&pk[i].r, &pk[i].b, &pk[i].g);	
	}
	for (i=0;i<4;i++){
		printf("%d %d %d \n",pk[i].r, pk[i].b, pk[i].g);
		sum=pk[i].r+ pk[i].b+pk[i].g;
		if(sum==pk[i].r) printf("bome je crveno\n\n");
		else if(sum==pk[i].b) printf("bome je plavo\n\n");
		else if(pk[i].r>=2*pk[i].g && pk[i].g>0 && pk[i].b==0) printf("bome je nancarasto\n\n");
		else printf("sa je ovoooo?\n\n");
		
	}} 
	
