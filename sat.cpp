#include <graphics.h>
#include <conio.h>

int main(){
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	circle(70,70,60);
	line (70,15,70,30);
	line (70,125,70,110);
	line (125,70,110,70);
	line (15,70,30,70);
	line (100,25,92,35);
	line (118,45,107,52);
	line (118,95,107,88);
	line (100,115,92,105);
	getch();
	closegraph;
	return 0;
	
}
