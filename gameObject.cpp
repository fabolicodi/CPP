#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct gejm{
    char character[50];
    int time;
    int score;
}a;

void logToCharacter(char character[], int time ){
FILE* filePointer;
strcat(character, ".txt");
filePointer=fopen(character,"r");

int currentPlayTime=0;
fscanf(filePointer,"%d",&currentPlayTime);
fclose(filePointer);

filePointer=fopen(character,"w");

currentPlayTime+=time;
fprintf(filePointer,"%d",currentPlayTime);
fclose(filePointer);
}

void logTime(){
	
int tempTime, tempScore;
char charTemp[50];	
FILE* filePointer;
filePointer=fopen("gaymer.txt","a");
printf("Kojeg charactera si koristio, koji ti je bio play time i koji ti je score nubaro jedna? \n");
scanf("%s %d %d",charTemp,&tempTime, &tempScore);

fprintf(filePointer,"%s\t%d\t%d\n",charTemp,tempTime, tempScore);
fclose(filePointer);
logToCharacter(charTemp, tempTime);


}

void maxScore(){
FILE* filePointer;
filePointer=fopen("vrijeme.txt","a");
//eitaj dok ima
//log max score
}

void totalTimePlayed() {
FILE* filePointer;
filePointer=fopen(".txt","r");
int currentPlayTime=0;
fscanf(filePointer,"%d",&currentPlayTime);
fclose(filePointer);

filePointer=fopen(time,"w");

currentPlayTime+=time;
fprintf(filePointer,"%d",currentPlayTime);
fclose(filePointer);


                     }

void mostUsedCharacter(){

//otvori datoteka popis karaktera
//petljano otvaraj datoteke svih karaktera i na? max

}



int main()
{
	logTime();
    return 0;
}
