#include <stdio.h>

int main(){
	int x,i;
	
	while(x!=2002){
	scanf("%d",&x);
	if(x==2002){
		printf("Acesso Permitido\n");
	} else{
		printf("Senha Invalida\n");
	}
	}
	return 0;
}
