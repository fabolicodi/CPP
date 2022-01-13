#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int F=5;
float C=6;
float K=10;
printf("Unesi Fahrenheite\n");

scanf("%d",&F);

C=((float)F-32)*9/5;
K=C+273.15;

printf("To je %.2f C\n %.2f K",C,K);

return 0;












}
