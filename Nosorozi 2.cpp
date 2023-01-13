#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct nosorog{
	char ime[25];
	char boja[25];
	int maxbrzina;
	int masa;
	int udarac;
};
int main (void){
	
	
struct nosorog ng[3]={"Jednorog","pink",40,3500,500,
	"Jelen","zelen",45,3500,600,
};

do{
	printf("Unesi Ime , boju svog nosoroga\n");
		scanf("%s %s",&ng[2].ime, &ng[2].boja);
	printf("Unesi brzinu u km/h, masu u kg i snagu udarca u N od svog nosoroga\n");
		scanf("%d %d %d",&ng[2].maxbrzina, &ng[2].masa, &ng[2].udarac);
			if(ng[2].udarac<(ng[2].masa*5)){
				printf("Nosoro ti je fatass \n");
				}

}while (ng[2].udarac<(ng[2].masa*5));


if(ng[0].udarac>ng[1].udarac&&ng[0].udarac>ng[2].udarac)
printf("%s je najaci nosorog takoder je %s boje",ng[0].ime,ng[0].boja);
else if(ng[0].masa>ng[1].masa&&ng[0].masa>ng[2].masa)
printf("%s je najaci nosorog takoder je %s boje",ng[0].ime,ng[0].boja);
else if(ng[0].maxbrzina>ng[1].maxbrzina&&ng[0].maxbrzina>ng[2].maxbrzina)
printf("%s je najaci nosorog takoder je %s boje",ng[0].ime,ng[0].boja);
	else if(ng[1].udarac>ng[2].udarac&&ng[1].udarac>ng[0].udarac)
printf("%s je najaci nosorog takoder je %s boje",ng[1].ime,ng[1].boja);
else if(ng[1].masa>ng[0].masa&&ng[1].masa>ng[2].masa)
printf("%s je najaci nosorog takoder je %s boje",ng[1].ime,ng[1].boja);
else if(ng[1].maxbrzina>ng[2].maxbrzina&&ng[1].maxbrzina>ng[0].maxbrzina)
printf("%s je najaci nosorog takoder je %s boje",ng[1].ime,ng[1].boja);
	else if(ng[2].udarac>ng[1].udarac&&ng[2].udarac>ng[0].udarac)
printf("%s je najaci nosorog takoder je %s boje",ng[2].ime,ng[2].boja);
else if(ng[2].masa>ng[1].masa&&ng[2].masa>ng[0].masa)
printf("%s je najaci nosorog takoder je %s boje",ng[2].ime,ng[2].boja);
else if(ng[2].maxbrzina>ng[1].maxbrzina&&ng[2].maxbrzina>ng[0].maxbrzina)
printf("%s je najaci nosorog takoder je %s boje",ng[2].ime,ng[2].boja);
}

