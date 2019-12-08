#include <stdio.h>

int main(){
	float a,percentual,antigo;
	int reajuste;
	scanf("%f",&a);
	antigo=a;
	if(a>0 && a<=400.00){
		percentual=0.15;
		reajuste=15;
	}else if(a<=800.00){
		percentual=0.12;
		reajuste=12;
	}else if(a<=1200.00){
		percentual=0.10;
		reajuste=10;
	}else if(a<=2000.00){
		percentual=0.07;
		reajuste=7;
	}else if(a>2000.00){
		percentual=0.04;
		reajuste=4;
	}
	a=a*(1.00+percentual);
	printf("Novo salario: %.2f\n",a);
	printf("Reajuste ganho: %.2f\n",(antigo*percentual));
	printf("Em percentual: %d %%\n",reajuste);
	return 0;
}
