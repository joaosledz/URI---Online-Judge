#include <stdio.h>

int main(){
	int x=0,alc=0,gas=0,dis=0;
	while(x!=4){
		scanf("%d",&x);
		if (x==1){
			alc++;
		} else if (x==2){
			gas++;
		} else if (x==3){
			dis++;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alc);
	printf("Gasolina: %d\n",gas);
	printf("Diesel: %d\n",dis);
	return 0;
}
