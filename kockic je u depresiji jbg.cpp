#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	rectangle(10, 10, 120, 120);
	line
	circle(40,45,15);
	circle(40,45,6);
	circle(85,45,15);
	circle(85,45,6);
	rectangle(30,80,95,90);
	getch();
	closegraph;
	return 0;
	
}

