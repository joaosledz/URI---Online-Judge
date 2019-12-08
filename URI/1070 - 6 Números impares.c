#include <stdio.h>

int main(){
	int menor,maior,x,y,soma=0;
	scanf("%d %d",&x,&y);
	if (x<y){
	menor=x;
	maior=y;	
	}else{
	menor=y;
	maior=x;
	}
	while(atual<maior){
		if(atual%2!=0){
			soma+=atual;
		}
		atual++;
	}
	return 0;
	}
