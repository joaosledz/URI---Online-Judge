#include "stdio.h"

int main(){
	float x,y,z,w;
	scanf("%f",&x);
	if(x<=2000 && x>=0){
		printf("Isento\n");
	} else if (x<=3000){
		x=(x - 2000.00)*0.08;
		printf("R$ %.2f\n",x);
	} else if (x<=4500){
		x=(x - 2000.00);
		y=(x - 1000.00);
		w=(x-y)*0.08+y*0.18;
		printf("R$ %.2f\n",w);
	} else {
		z=(x - 4500.00);
		printf("R$ %.2f\n",350+z*0.28);	
	}
	return 0;
}
