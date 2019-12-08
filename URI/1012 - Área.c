#include <stdio.h>
#define pi 3.14159
#include <math.h>

int main(){
	double A,B,C,AreaTriangulo,AreaCirculo,AreaTrapezio,AreaQuadrado,AreaRetangulo;
	scanf("%lf %lf %lf", &A,&B,&C);
	//Área do Triângulo
	AreaTriangulo = A*C/2.0;
	//Área do Círculo
	AreaCirculo = pi*pow(C,2.0);
	//Área do Trapézio
	AreaTrapezio = (A+B)/2.0*C; 
	//Área do Quadrado
	AreaQuadrado = B*B;
	//Área do Retângulo
	AreaRetangulo = A*B;
	//Prints
	printf("TRIANGULO: %.3lf\n",AreaTriangulo);
	printf("CIRCULO: %.3lf\n",AreaCirculo);
	printf("TRAPEZIO: %.3lf\n",AreaTrapezio);
	printf("QUADRADO: %.3lf\n",AreaQuadrado);
	printf("RETANGULO: %.3lf\n",AreaRetangulo);
	return 0;
}
