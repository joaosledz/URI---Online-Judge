#include <stdio.h>

int main(){
	int MAX,i;
	float media,a,b,c;
	scanf("%d",&MAX);
	for(i=1;i<=MAX;i++){
		scanf("%f %f %f",&a,&b,&c);
		media=(a*2+b*3+c*5)/10;
		printf("%.1f\n",media);
		}
	return 0;
}
