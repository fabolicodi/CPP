#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IQ (int x){

return (x+7)>170;
}

int main(){
int a;
printf("Unesi Andrein IQ \n");
scanf("%d",&a);
if (IQ(a))
printf("da");
else
printf("ne");
}
