#include <stdio.h>

int main(){
	int a=1,x,y,cont=0;
	scanf("%d %d",&x,&y);
	while (a<=y){
		if(cont==x){
			printf("\n");
			cont=0;
		} else if(a!=1) printf(" ");
		printf("%d",a);
		a++;
		cont++;
	}
	printf("\n");
	return 0;
}
