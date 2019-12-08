#include <stdio.h>

int main(){
	int a,b;
	float valor;
	scanf("%d %d",&a,&b);
	switch(a){
		case 1:
			valor=(float)b*4.00;
			break;
		case 2:
			valor=(float)b*4.50;
			break;
		case 3:
			valor=(float)b*5.00;
			break;
		case 4:
			valor=(float)b*2.00;
			break;
		case 5:
			valor=(float)b*1.50;
			break;
	}
	printf("Total: R$ %.2f\n",valor);
	return 0;
}
