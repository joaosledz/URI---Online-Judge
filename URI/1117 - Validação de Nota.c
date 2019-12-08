#include <stdio.h>

int main(){
	int i=0;
	float x,media,soma=0;
	while(i<2){
		scanf("%f",&x);
		if(x>=0 && x<=10){
			soma+=x;
			i++;
		} else printf("nota invalida\n");
	}	
	media=soma/2;
	printf("media = %.2f\n",media);
	return 0;
}
