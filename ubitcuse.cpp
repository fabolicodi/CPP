#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	
	int gd=DETECT, gm,x,x1,y,y1;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int i=0;
	float alpha;
	

for(;;){
	for(i=200;i<340;i++){
		alpha=3.14 * i /180;
		x=250+cos(alpha)*100;
		x1=250+cos(alpha)*140;
		y=20 - sin (alpha)*100;
		y1=20 - sin (alpha)*140;
		line(0,20,700,20);
		line(250,20,x,y);
		circle(x1,y1,40);
		delay(10);
		cleardevice();
	}


for(i=340;i>200;i--){
		alpha=3.14 * i /180;
		x=250+cos(alpha)*100;
		x1=250+cos(alpha)*140;
		y=20 - sin (alpha)*100;
		y1=20 - sin (alpha)*140;
		line(0,20,700,20);
		line(250,20,x,y);
		circle(x1,y1,40);
		delay(10);
		cleardevice();
	}

}
	getch();
	closegraph();
	return 0;
	}
