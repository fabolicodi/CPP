#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int i=0,j=0,k=0,h=0,b=0,n=0;
	
	for(;;){

	for(int j=0; j<n ;j++){
	int colour=j;
	sector(260,100,0,180,45,30);
	setfillstyle(SOLID_FILL,colour);
	floodfill(300,200,WHITE);

	}
	
	rectangle(10,10,510,310);
	line(260,10,260,70);
	line(270,300,270,240);
	line(400,300,400,240);
	line(270,240,400,240);
	line(230,300,230,270);
	line(190,300,190,210);
	line(190,270,230,270);
	line(215,265,235,265);
	line(215,265,215,220);
	circle(215,213,7);
	line(215,240,225,240);
	line(235,265,240,290);
	line(245,110,235,135);
	line(275,110,285,135);
	line(225,110,205,130);
	line(295,110,315,130);
			delay(100);
		cleardevice();

}
	
	
	
	getch();
	closegraph();
	return 0;
	}
