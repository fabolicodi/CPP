#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int F1=6;
int F2=5;
printf("Unesi sile\n");
scanf ("%d %d",&F1,&F2);
int a=F1+F2;
int b=F1-F2;
float c= (float) (F1*F1+F2*F2);

printf("Kada su sile u istom smjeru sila je = %d\n",a);
printf("Kada su sile u razlicitom smjeru sila je = %d\n",b);
printf("Kada su sile okomite sila je = %.2f\n",sqrt(c));

return 0;











}
