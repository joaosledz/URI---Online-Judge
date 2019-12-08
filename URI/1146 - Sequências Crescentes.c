#include <stdio.h>

int main(){
	int a=1,x=1;
	while(x!=0){
	scanf("%d",&x);
	while (a<=x){
		if(a!=1) printf(" ");
		printf("%d",a);
		a++;
	}
	if(x!=0){
	printf("\n");
	}
	a=1;
	}
	return 0;
}
