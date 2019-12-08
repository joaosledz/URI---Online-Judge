#include "stdio.h"
#include "string.h"

int main(){
	char x[15], y[15], z[15];
	typedef struct Animal{
		char Nome[15];
		char SubFilo[15];
		char Classe[15];
		char Ordem[15];
	}TipoAnimal;
	
	scanf("%s", &x);
	scanf("%s", &y);
	scanf("%s", &z);
	
	TipoAnimal a = {"aguia","vertebrado","ave","carnivoro"};
	TipoAnimal b = {"pomba","vertebrado","ave","onivoro"};
	TipoAnimal c = {"homem","vertebrado","mamifero","onivoro"};
	TipoAnimal d = {"vaca","vertebrado","mamifero","herbivoro"};
	TipoAnimal e = {"pulga","invertebrado","inseto","hematofago"};
	TipoAnimal f = {"lagarta","invertebrado","inseto","herbivoro"};
	TipoAnimal g = {"sanguessuga","invertebrado","anelideo","hematofago"};
	TipoAnimal h = {"minhoca","invertebrado","anelideo","onivoro"};
	
	TipoAnimal lista[10];
	lista[0] = a;
	lista[1] = b;
	lista[2] = c;
	lista[3] = d;
	lista[4] = e;
	lista[5] = f;
	lista[6] = g;
	lista[7] = h;
	
	int i;
	for (i=0;i<8;i++){
		if (strcmp(lista[i].SubFilo,x) == 0 && strcmp(lista[i].Classe,y) ==0 && strcmp(lista[i].Ordem,z) == 0){
			printf("%s\n",lista[i].Nome);
			return 0;
		}
	}
	
	return 0;
}
