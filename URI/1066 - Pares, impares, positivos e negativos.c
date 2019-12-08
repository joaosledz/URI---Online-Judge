#include <stdio.h>

int main(){
	int a[4],i,contPAR=0,contIMPAR=0,contPOS=0,contNEG=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		//pares
		if(a[i]%2==0){
		contPAR++;
		} 
		//impares
		else contIMPAR++;
		//positivos
		if(a[i]>0){
		contPOS++;
		} 
		//negativos
		if(a[i]<0){
		contNEG++;
		} 
	}
	printf("%d valor(es) par(es)\n",contPAR);
	printf("%d valor(es) impar(es)\n",contIMPAR);
	printf("%d valor(es) positivo(s)\n",contPOS);
	printf("%d valor(es) negativo(s)\n",contNEG);
	return 0;
}
