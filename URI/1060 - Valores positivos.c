#include "stdio.h"

int main(){
	int i,cont=0;
	float x[5];
	for (i=0;i<=5;i++){
		scanf("%f",&x[i]);
		if (x[i]>0) cont++;
	}
	printf("%d valores positivos\n",cont);
	return 0;
}
