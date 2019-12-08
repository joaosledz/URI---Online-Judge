#include <stdio.h>
#define TotalProdutos 2
int main(){
	int codigo[TotalProdutos],Qtd[TotalProdutos],i;
	double V[TotalProdutos],total=0;
	char Nome[20];
	for(i=0;i<TotalProdutos;i++){
	scanf("%d %d %lf",&codigo[i],&Qtd[i],&V[i]);
	total=total+Qtd[i]*V[i];	
	}
	printf("VALOR A PAGAR: R$ %.2lf\n",total);
	
	return 0;
}
