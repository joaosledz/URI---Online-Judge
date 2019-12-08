#include <stdio.h>

int main(){
	int atual,MAX,in=0,out=0,i;
	scanf("%d",&MAX);
	for(i=0;i<MAX;i++){
		scanf("%d",&atual);
		if(atual>=10 && atual <=20) in++;
		else out++;
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
	return 0;
	}
