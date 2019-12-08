#include "stdio.h"

int main(){
	int x;
	scanf("%d", &x);
	switch (x)
		{
		case 61:
		      printf("Brasilia\n");
		break;
		case 71:
		     printf("Salvador\n");
		break;
		case 11:
		     printf("Sao Paulo\n");
		break ;
		case 21:
		     printf("Rio de Janeiro\n");
		break;
		case 32:
		     printf("Juiz de Fora\n");
		break;
		case 19:
		     printf("Campinas\n");
		break;
		case 27:
		     printf("Vitoria\n");
		break;
		case 31:
		     printf("Belo Horizonte\n");
		break;
		default: printf("DDD nao cadastrado\n");
		}
	/*
	typedef struct Interurbano{
		int DDD;
		char Cidade[25];
	}Interurbano;
	
	int x, i;
	scanf("%d", &x);
	Interurbano lista[10];
	lista[0] = {61,"Brasilia"};
	lista[1] = {71,"Salvador"};
	lista[2] = {11,"Sao Paulo"};
	lista[3] = {21,"Rio de Janeiro"};
	lista[4] = {32,"Juiz de Fora"};
	lista[5] = {19,"Campinas"};
	lista[6] = {27,"Vitoria"};
	lista[7] = {31,"Belo Horizonte"};
	
	for (i=0;i<8;i++){
		if (lista[i].DDD == x){
			printf("%s\n",lista[i].Cidade);
			return 0;
		}
		printf("DDD nao cadastrado\n");
	}
	*/
	return 0;
}
