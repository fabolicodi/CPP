#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int v=0,y=0,x=0;
	char a;
do{
	a=getch();
	if(a=='+') v-=10;
	if(a=='-') v+=10;
	if(a=='w') x-=5;
	if(a=='a') y-=5;
	if(a=='s') x+=5;
	if(a=='d') y+=5;
	cleardevice();
	line(50+y,350+x,100+y,300+x);
	line(150+y,350+x,200+y,300+x);
	line(50+y,350+x,150+y,350+x);
	line(100+y,300+x,200+y,300+x);
	line(100+y,300+x,125+y,200+v+x);
	line(50+y,350+x,125+y,200+v+x);
	line(200+y,300+x,125+y,200+v+x);
	line(150+y,350+x,125+y,200+v+x);
	
	
	}while (a!='q');

	getch();
	closegraph();
	return 0;
	}
