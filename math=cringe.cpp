#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
	int x,y;
};
int main (void)
{
  
  struct Point t1={3,2};	
  struct Point t2={7,9};
  
  
  float a=sqrt(pow(t1.x-t2.x,2)+pow(t2.y-t1.y,2));
  printf("Udaljenost izmedu t1 i t2 je %.2f\n",a);
  float b=sqrt(pow(t1.x-0,2)+pow(0-t1.y,2));
  float c=sqrt(pow(t2.x-0,2)+pow(0-t2.y,2));
  if (b<c)
  	printf("t1 je blize nuli nego t2 \n");
	else 
	 printf("t2 je blize nuli nego t1 \n");
  
}
