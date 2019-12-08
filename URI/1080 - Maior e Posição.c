#include <stdio.h>
#define MAX 100
int main(){
	int x,maior,posicao,i;
	scanf("%d",&maior);
	for (i=2;i<=MAX;i++){
		scanf("%d",&x);
		if(x>maior){
			maior = x;
			posicao = i;
		}
	}
	printf("%d\n%d\n",maior,posicao);
	
	return 0;
}
