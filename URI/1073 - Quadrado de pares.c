#include <stdio.h>
#include <math.h>

int main(){
	int quadrado,atual,MAX,in=0,out=0,i;
	scanf("%d",&MAX);
	atual=2;
	for(i=1;i<=MAX;i++){
		if(atual%2==0){
		quadrado=pow(atual,2);
		printf("%d^2 = %d\n",atual,quadrado);	
		}
		atual++;
	}
	return 0;
	}
