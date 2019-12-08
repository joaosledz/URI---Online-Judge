#include <stdio.h>

int main(){
	int atual,menor,maior,x,y,soma=0;
	while(1){
	scanf("%d %d",&x,&y);
	if (x<=0 || y<=0){
		return 0;
	} else if (x<y){
		menor=x;
		maior=y;	
			}else{
				menor=y;
				maior=x;
			}
	atual=menor;
			while(atual<=maior){
				printf("%d ",atual);
				soma+=atual;
				atual++;
			}	
	printf("Sum=%d\n",soma);
	soma=0;
	}
	return 0;
}
