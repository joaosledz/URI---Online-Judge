#include <stdio.h>

int main(){
	int i,x,a=1,b=1;
		scanf("%d",&x);
	for(i=0;i<x;i++){
		printf("%d %d %d\n",a,b,a*b);
		printf("%d %d %d\n",a,b+1,a*b+1);
		a++;
		b=a*a;	
	}
	return 0;
}
