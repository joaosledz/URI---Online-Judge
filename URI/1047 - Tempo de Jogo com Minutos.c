#include <stdio.h>

int main(){
	int a,b,c,d,horas,minutos;
	scanf("%d %d %d %d",&a,&c,&b,&d);
	//Hora do jogo
	if(a==b && c==d){
		horas=24;	
		}else if(a==b) horas=0;
			else if(b>a) horas=b-a;
				else horas=24-(a-b);
	//Minutos do jogo
	if(c==d)minutos=0;
		else if(d>c) minutos=d-c;
			else {
				horas--;
				minutos=60-(c-d);	
			}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
	return 0;
}
