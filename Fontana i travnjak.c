#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


    float P=3.14159;
    int T;
    int F;
    printf("Unesi polumjer kruga travnjaka\n");
    scanf("%d",&T);
    printf("Unesi polumjer kruga fontane\n");
    scanf("%d",&F);
    int A=F*F*P;
    int B=T*T*P;
    int C=B-A;
    printf("Povrsina travnjaka je = %.2d m^2 \n",C);

    return 0;


}
