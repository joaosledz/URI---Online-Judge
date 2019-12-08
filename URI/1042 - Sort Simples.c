#include <stdio.h>
#define TAM 3
int main(){
	int vetor[TAM],b[TAM],aux,x,y;
	for (x=0;x<TAM;x++){
		scanf("%d",&vetor[x]);
		b[x]=vetor[x];	
	}
  // coloca em ordem crescente (1,2,3,4,5...)  
  for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ ) // sempre 1 elemento à frente
    {
      // se o (x > (x+1)) então o x passa pra frente (ordem crescente)
      if ( vetor[x] > vetor[y] )
      {
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } // fim da ordenação
  // exibe elementos ordenados   
  for( x = 0; x < TAM; x++ )
  {
    printf("%d\n",vetor[x]); // exibe o vetor ordenado
  }
  printf("\n"); 
  for( x = 0; x < TAM; x++ )
  {
    printf("%d\n",b[x]); // exibe o vetor ordenado
  }   
	return 0;
}
