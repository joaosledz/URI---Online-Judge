#include <stdio.h>
#define pi 3.14159
#include <math.h>

int main(){
	double A,B,C,AreaTriangulo,AreaCirculo,AreaTrapezio,AreaQuadrado,AreaRetangulo;
	scanf("%lf %lf %lf", &A,&B,&C);
	//�rea do Tri�ngulo
	AreaTriangulo = A*C/2.0;
	//�rea do C�rculo
	AreaCirculo = pi*pow(C,2.0);
	//�rea do Trap�zio
	AreaTrapezio = (A+B)/2.0*C; 
	//�rea do Quadrado
	AreaQuadrado = B*B;
	//�rea do Ret�ngulo
	AreaRetangulo = A*B;
	//Prints
	printf("TRIANGULO: %.3lf\n",AreaTriangulo);
	printf("CIRCULO: %.3lf\n",AreaCirculo);
	printf("TRAPEZIO: %.3lf\n",AreaTrapezio);
	printf("QUADRADO: %.3lf\n",AreaQuadrado);
	printf("RETANGULO: %.3lf\n",AreaRetangulo);
	return 0;
}
