#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float sok (float x){
	
x=x*50;
x=x-((x*0.2)+(x*0.2)+(x*0.3));
return x;

}
int main(){
float a;
printf("Unesi broj prodanih casa \n");
scanf("%f",&a);

printf("Profit je %.2f",sok(a));
}
