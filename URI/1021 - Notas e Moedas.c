#include <stdio.h>
int main(){
	float dinheiro,moedaF;
	int papel,moeda;
	scanf("%f",&dinheiro);
	papel=(int)dinheiro;
	moeda=(int)((dinheiro-(float)papel+0.001)*100.0);
		printf("NOTAS:\n");
		printf("%d nota(s) de R$ 100.00\n",papel/100);
		papel = papel%100;
		printf("%d nota(s) de R$ 50.00\n",papel/50);
		papel=papel%50;
		printf("%d nota(s) de R$ 20.00\n",papel/20);
		papel=papel%20;
		printf("%d nota(s) de R$ 10.00\n",papel/10);
		papel=papel%10;
		printf("%d nota(s) de R$ 5.00\n",papel/5);
		papel=papel%5;
		printf("%d nota(s) de R$ 2.00\n",papel/2);
		papel=papel%2;
		printf("MOEDAS:\n");
		printf("%d moeda(s) de R$ 1.00\n",papel);
		printf("%d moeda(s) de R$ 0.50\n",moeda/50);
		moeda=moeda%50;
		printf("%d moeda(s) de R$ 0.25\n",moeda/25);
		moeda=moeda%25;
		printf("%d moeda(s) de R$ 0.10\n",moeda/10);
		moeda=moeda%10;
		printf("%d moeda(s) de R$ 0.05\n",moeda/5);
		moeda=moeda%5;
		printf("%d moeda(s) de R$ 0.01\n",moeda);		
	return 0;
}
