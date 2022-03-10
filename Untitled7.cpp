#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
int a,b,c,d;
printf("Unesi troznamenkasti broj\n");
scanf("%d",&a);
b=a/100;
c=a/10;
c=c-(10*b);
d=a-(100*b)-(c*10);
if (a==(b*b*b)+(c*c*c)+(d*d*d))
printf("%d je Armstrogov broj",a);
else
printf("%d nije Armstrogov broj",a);

return 0;
}
