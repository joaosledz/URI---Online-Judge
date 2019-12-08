#include <stdio.h>

int main(){
	int i=0,A,N,soma=0;
	scanf("%d %d",&A,&N);
	while (N<=0) scanf("%d",&N);
	while(i<=N-1){
		soma+=i+A;
		i++;
	}
	printf("%d\n",soma);
	return 0;
}
