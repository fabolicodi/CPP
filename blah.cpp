#include<graphics.h>
#include<conio.h>
#include <math.h>
#include<stdio.h>

int main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	int y=0,x=0,v=0,c=0;
	char a;
do{
	a=getch();
	if(a=='w') x-=5;
	if(a=='s') x+=5;
	if(a=='a') y-=5;
	if(a=='d') y+=5;
	v++;
	cleardevice();

	
rectangle(10,10,510,410);
ellipse(260+y,120+x,0,360,26,10);
ellipse(260+y,200+x,0,360,26,10);
line(286+y,120+x,286+y,200+x);
line(234+y,120+x,234+y,200+x);
line(234+y,120+x,260+y,70+x);
line(286+y,120+x,260+y,70+x);
line(286+y,165+x,336+y,165+x);
line(286+y,150+x,336+y,150+x);
line(234+y,165+x,184+y,165+x);
line(234+y,150+x,184+y,150+x);
line(336+y,150+x,336+y,165+x);
line(184+y,165+x,184+y,150+x);
ellipse(204+y,175+x,0,360,4,10);
ellipse(164+y,175+x,0,360,4,10);
ellipse(316+y,175+x,0,360,4,10);
ellipse(356+y,175+x,0,360,4,10);
line(356+y,165+x,316+y,165+x);
line(356+y,185+x,316+y,185+x);
line(204+y,165+x,164+y,165+x);
line(204+y,185+x,164+y,185+x);

if (v<5){
line(286+y,200+x,300+y,240+x);
line(234+y,200+x,220+y,240+x);
line(220+y,240+x,240+y,220+x);
line(300+y,240+x,280+y,220+x);
line(240+y,220+x,250+y,230+x);
line(280+y,220+x,270+y,230+x);
line(270+y,230+x,260+y,245+x);
line(250+y,230+x,260+y,245+x);

}
else{
line(286+y,200+x,300+y,220+x);
line(234+y,200+x,220+y,220+x);
line(220+y,220+x,240+y,210+x);
line(300+y,220+x,280+y,210+x);
line(240+y,210+x,250+y,215+x);
line(280+y,210+x,270+y,215+x);
line(270+y,215+x,260+y,205+x);
line(250+y,215+x,260+y,205+x);
v=v-5;
}


}while (a!='q');

getch();
closegraph();
return 0;
	
}
