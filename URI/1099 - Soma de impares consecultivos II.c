#include <stdio.h>

int main(){
	int MAX,i,atual,menor,maior,x,y,soma=0;
	scanf("%d",&MAX);
	for(i=0;i<MAX;i++){
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
		if(atual%2!=0){
			soma+=atual;
		}
		atual++;
	}	
	printf("%d\n",soma);
	soma=0;
	}
	
	return 0;
	}
