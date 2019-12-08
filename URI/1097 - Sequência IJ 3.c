#include <stdio.h>

int main(){
	int i=1,j=7,cont,cont2;
	for(cont=1;cont<=5;cont++){
		for(cont2=1;cont2<=3;cont2++){
		printf("I=%d J=%d\n",i,j);
		j--;
		}
		i+=2;
		j+=5;
	}
}
