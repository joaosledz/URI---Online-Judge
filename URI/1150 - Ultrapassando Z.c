#include <stdio.h>
#define lin 12
#define col 12
int main(){
	double M[lin][col],soma=0,media;
	int contS,linha,i,j,cont,cont2;
	char oper;
	scanf(" %c",&oper);
	//leitura
	for (i=0;i<lin;i++){
		for (j=0;j<col;j++){
		scanf("%lf",&M[i][j]);
		}	
	}
	//Soma
	cont=col-1;
	cont2=7;
	contS=0;
		for (i=1;i<11;i++){
			if(i<6){
				for (j=col-1;j>=cont;j--){
					soma+=M[i][j];
					M[i][j]=2;
					contS++;	
			} }else {
				for (j=cont2;j<=col-1;j++){
					soma+=M[i][j];
					M[i][j]=2;
					contS++;
			}
		}
		cont--;
		if(i>5) cont2++;
	}
	media=soma/contS;
	if(oper=='S'){
		printf("%.1lf\n",soma);
	}
	if(oper=='M'){
		printf("%.1lf\n",media);
	}
	
	for (i=0;i<lin;i++){
		for (j=0;j<col;j++){
		printf("%.0lf ",M[i][j]);
		}	
		printf("\n");
	}
	return 0;
}

/*1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1*/
