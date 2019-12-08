#include <stdio.h>

int main(){
	int atual,i;
	scanf("%d",&atual);
	for(i=1;i<=10000;i++){
		if(i%atual==2){
			printf("%d\n",i);
		}
		}
	return 0;
}
