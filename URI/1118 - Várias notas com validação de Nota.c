#include <stdio.h>

int main(){
	int i=0,novo=1;
	float x,media,soma=0;
	while(novo==1){
	while(i<2){
		scanf("%f",&x);
		if(x>=0 && x<=10){
			soma+=x;
			i++;
		} else printf("nota invalida\n");
	}	
	media=soma/2;
	printf("media = %.2f\n",media);
	novo=3;
	while(novo!=2 && novo!=1){
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d",&novo);
	}
	soma=0;
	i=0;
	}
	return 0;
}
