#include <stdio.h>

int main(){
	int MAX,i;
	float div,x=1,y=1;
	scanf("%d",&MAX);
	for(i=0;i<MAX;i++){
	scanf("%f %f",&x,&y);
	if(y==0){
		printf("divisao impossivel\n");
	} else {
		div=x/y;
		printf("%.1f\n",div);
	}
	}
	return 0;
}
