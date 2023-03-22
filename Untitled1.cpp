#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct idk{
char ime[50];
char predmet[50];
int ocjena;
}i;
 void Unos (){
FILE*filePointer;
filePointer=fopen("ocjene.txt","a");
fprintf("ime \t predmet \t ocjena \n");
printf("Unesi ime predmet i ocjenu");
scanf("%s %s %d",i.ime, i.predmet, &i.ocjena);
fprintf("%s \t %s \t %d",i.ime , i.predmet, i.ocjena);
fclose(filePointer);
 };
 
 void ProsjekOcjena (){
 	
 };
 
 void Br_predmeta(){
 	
 };
 
 void ProsjekPredmeta(){
 	
 };

void ispis(){
 	
 };

 main()
{
int a;

FILE*filePointer;
filePointer=fopen("ocjene.txt","a");
fclose(filePointer);

    do{
    Printf("Zelis li Unjeit ocjenu 1, ProsjekoOcjena 2, Br_Predmeta 3, ProsjekPredmeta 4, Ispis 5 ili exit 6")
	a=getch();
	if (a=='1')
	unos();
	else	if (a=='2')
			ProsjekOcjene();
			else	if (a=='3')
					Br_predmeta();
					else	if(a=='4')
							ProsjekPredmeta();
							else	if(a=='5')
									ispis();
	
    }while(a!='6');
}
