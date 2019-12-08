#include <stdio.h>

int main(){
	int a,b,duracao;
	scanf("%d %d",&a,&b);
	if(a==b) duracao=24;
	else if(b>a) duracao=b-a;
	else duracao=24-(a-b);
	printf("O JOGO DUROU %d HORA(S)\n",duracao);
	return 0;
}
