#include <stdio.h>

int main(){
	int i,x,total=0,qc=0,qr=0,qs=0,N;
	float pc,pr,ps; 
	char tipo;	
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		scanf("%d %c",&x,&tipo);
		if (tipo=='C'){
			qc+=x;
		} else if (tipo=='R'){
			qr+=x;
		} else if (tipo=='S'){
			qs+=x;}
		total+=x;
	}
	pc=(float)qc/total*100;
	pr=(float)qr/total*100;
	ps=(float)qs/total*100;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", qc);
	printf("Total de ratos: %d\n", qr);
	printf("Total de sapos: %d\n", qs);
	printf("Percentual de coelhos: %.2f %%\n", pc);
	printf("Percentual de ratos: %.2f %%\n", pr);
	printf("Percentual de sapos: %.2f %%\n", ps);
	return 0;
}
