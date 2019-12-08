#include <stdio.h>

int main(){
	double SalFixo, Vendas, SalCombinado;
	char Nome[20];
	scanf("%s %lf %lf",&Nome,&SalFixo,&Vendas);
	SalCombinado = SalFixo + Vendas*0.15;
	printf("TOTAL = R$ %.2lf\n",SalCombinado);
	
	return 0;
}
