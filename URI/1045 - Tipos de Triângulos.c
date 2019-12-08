#include <stdio.h>
#include <math.h>
#define TAM 3
int main(){
	double vetor[TAM],a,b,c,aux;
	int x,y;
	for(x=0;x<TAM;x++){
		scanf("%lf",&vetor[x]);
	}
	for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento à frente
    {
      if ( vetor[y] > vetor[x] )
      {
         aux = vetor[y];
         vetor[y] = vetor[x];
         vetor[x] = aux;
      }
    }
  } // fim da ordenação
	a=vetor[0];
	b=vetor[1];
	c=vetor[2];
	if(a>=b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else{
	if(pow(a,2.0)==pow(b,2.0)+pow(c,2.0)){
		printf("TRIANGULO RETANGULO\n");
	}else if(pow(a,2.0)>pow(b,2.0)+pow(c,2.0)){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(pow(a,2.0)<pow(b,2.0)+pow(c,2.0)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a==b && b==c){
		printf("TRIANGULO EQUILATERO\n");
	}else if (a==b || a==c || b==c){
		printf("TRIANGULO ISOSCELES\n");
	}
	} 
	return 0;
}
