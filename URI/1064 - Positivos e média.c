#include <stdio.h>

int main(){
	int i,cont=0;
	double a[5],soma=0,media;
	for(i=0;i<6;i++){
		scanf("%lf",&a[i]);
		if(a[i]>0){
		cont++;
		soma+=a[i];	
		} 
	}
	media=soma/cont;
	printf("%d valores positivos\n",cont);
	printf("%.1lf\n",media);
	
	return 0;
}
