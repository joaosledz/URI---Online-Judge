#include <stdio.h>

int main(){
	int i,atual,menor,maior,x,y,soma=0;
	scanf("%d %d",&x,&y);
	if (x<y){
	menor=x;
	maior=y;	
	}else{
	menor=y;
	maior=x;
	}
	atual=menor;
	while(atual<=maior){
		if(atual%13!=0){
			soma+=atual;
		}
		atual++;
	}	
	printf("%d\n",soma);
	return 0;
	}
