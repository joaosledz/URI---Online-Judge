#include <stdio.h>

int main(){
	int i,x,a=1;
		scanf("%d",&x);
	for(i=0;i<x;i++){
		printf("%d %d %d\n",a,a*a,a*a*a);
		a++;	
	}
	return 0;
}
