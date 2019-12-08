#include <stdio.h>

int main(){
	float a,b,c,d,e,media,mediaFinal;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	media=(2*a+3*b+4*c+d)/10.0;
	printf("Media: %.1f\n",media);
	if(media>=7){
		printf("Aluno aprovado.\n");
	}else if(media<5){
		printf("Aluno reprovado.\n");
	}else if(media<7 && media>=5){
		printf("Aluno em exame.\n");
		scanf("%f",&e);
		printf("Nota do exame: %.1f\n",e);
		mediaFinal=(media+e)/2.0;
		if(mediaFinal>=5){
		printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n",mediaFinal);
	}
	return 0;
}
