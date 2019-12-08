#include <stdio.h>

int main(){
	int a,b,cont,cont2,cont3=0;
	float i=0,j=1;
	while(i<=2.2){
		for(cont2=1;cont2<=3;cont2++){
		if(cont3%5==0){
		a=i;
		b=j+0.2;
		printf("I=%d J=%d\n",a,b);
		j++;
		}else{	
		printf("I=%.1f J=%.1f\n",i,j);
		j++;
		}
		}
		i+=0.2;
		j-=2.8;
		cont3++;
	}
}

