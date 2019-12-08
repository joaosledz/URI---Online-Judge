#include <stdio.h>

int main(){
	int Dias, horas, minutos, segundos, d1, d2, h1, h2, m1, m2, s1, s2;
	scanf("%*s %d",&d1);
	scanf("%d %*s",&h1);
	scanf("%d %*s",&m1);
	scanf("%d",&s1);
	
	scanf("%*s %d",&d2);
	scanf("%d %*s",&h2);
	scanf("%d %*s",&m2);
	scanf("%d",&s2);
	
	//Dias
            Dias = d2 - d1;
            //Horas
            if (h2 >= h1)
            {
                horas = h2 - h1;
            }
            else
            {
                Dias--;
                horas = 24 -(h1 - h2);
            }
            //Minutos
            if (m2>=m1) minutos = m2-m1;
            else
            {
                horas--;
                minutos = 60 - (m1 - m2);
            }
            
            //Segundos

            if (s2 >= s1)
            {
                segundos = s2 - s1;
            }
            else
            {
                minutos--;
                segundos = 60 -(s1 - s2);
            }
			//Printar
			printf("%d dia(s)\n",Dias);
			printf("%d hora(s)\n",horas);
			printf("%d minuto(s)\n",minutos);
			printf("%d segundo(s)\n",segundos);	
	return 0;
}
