#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	
	
	for(int i=0;i<230;i+=2){
	rectangle(50,50,400,400);
	circle(225,145+i,25);
	delay(10);
	cleardevice();
}
	for(int i=0;i<160;i+=2){
	rectangle(50,50,400,400);
	circle(225,375-i,25);
	delay(10);
	cleardevice();
}
	for(int i=0;i<160;i+=2){
	rectangle(50,50,400,400);
	circle(225,215+i,25);
	delay(10);
	cleardevice();
}
	for(int i=0;i<80;i+=2){
	rectangle(50,50,400,400);
	circle(225,375-i,25);
	delay(10);
	cleardevice();
}
	for(int i=0;i<80;i+=2){
	rectangle(50,50,400,400);
	circle(225,295+i,25);
	delay(10);
	cleardevice();
}
	rectangle(50,50,400,400);
	circle(225,375,25);
	getch();
	closegraph;
	return 0;
	
}
