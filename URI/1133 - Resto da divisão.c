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
	atual=menor+1;
	while(atual<maior){
		if(atual%5==2 || atual%5==3){
			printf("%d\n",atual);
		}
		atual++;
	}	
	return 0;
	}
