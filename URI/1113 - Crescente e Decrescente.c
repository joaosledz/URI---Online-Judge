#include <stdio.h>

int main(){
	int x,y,i;
	
	while(x!=y){
	scanf("%d %d",&x,&y);
	if(x>y){
		printf("Decrescente\n");
	} else if(x<y){
		printf("Crescente\n");
	}
	}
	return 0;
}
