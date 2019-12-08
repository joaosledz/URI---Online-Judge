#include <stdio.h>
#include <math.h>
#define pi 3.14159


int main(){
	double Raio, Volume;
	scanf("%lf", &Raio);	
	Volume = (4.0/3)*pi*pow(Raio,3.0);
	printf("VOLUME = %.3lf\n",Volume);
	
	return 0;
}
