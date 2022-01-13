#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a;
    printf("Unesi šesteroznameknkasti broj: ");
    scanf("%d",&a);

    printf("\nzbroj znamenki je %d",a%10+(a/10)%10+(a/100)%10+(a/1000)%10+(a/10000)%10+a/100000);
    return 0;








}
