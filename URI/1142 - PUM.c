#include <stdio.h>

int main(){
	int N,a=1,i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
	printf("%d %d %d PUM\n",a,a+1,a+2);
	a+=4;
	}
	return 0;
}
