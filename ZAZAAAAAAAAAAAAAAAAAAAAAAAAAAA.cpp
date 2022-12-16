#include <stdio.h>
#include <stdlib.h>

struct ucenici{
	char prezime[21];
	int godiste;
	char OIB[19];
	int bodovi;
};

int main (void){
	int i,sum=0,c;
	
	
	struct ucenici uc[20]={ "ovojeime",3065, "01023981247", 79,
	"buljanin",3065, "01023981248", 80,
	"avoezime",3065, "01023981249", 30,
	"cvezime",3065, "01023981240", 40,
	"akmacic",3065, "01023981241", 70,
	"zauvijek",3065, "01023981242", 74,
	"peder",3065, "01023981243", 65,
	"simic",3206, "01023981244", 81,
	"simich",32006, "01023981245", 80,
	"tvojamama",252, "01023981246", 69,
	"nigic",1789, "01023981217", 67,
	"Idzojtic",2006, "01023981227", 1,
	"rajicgay",3065, "01023981237", 2,
	"kutinabad",3065, "01023981257", 80,
	"ferdinand",3065, "01023981267", 50,
	"rizzler",3065, "01023981277", 77,
	"quickkie",3065, "01023981287", 10,
	"speed",3065, "01023981297", 55,
	"septoduo",3065, "01023981207", 43,
	"jadranko",3065, "01023981047", 40
	};
	for(i=0;i<20;i++){
	sum=sum+uc[i].bodovi;
	}
	c=sum/20;
	printf("%d",c);
	
	
	for (i=0;i<20;i++){
		
		if(uc[i].bodovi>c){
	
		printf("\n");
		printf("%s     \t %d",uc[i].prezime,uc[i].bodovi );	}
	}

}
