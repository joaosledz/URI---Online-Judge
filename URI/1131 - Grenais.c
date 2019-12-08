#include <stdio.h>

int main(){
	int novo=1,x,y,jogos=0,empate=0,vint=0,vgre=0;
	while(novo==1){
		jogos++;
		scanf("%d %d",&x,&y);
		if(x>y){
			vint++;
		} else if(x<y){
			vgre++;
			}else empate++;
	novo=3;
	while(novo!=2 && novo!=1){
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d",&novo);
	}
	}
	printf("%d grenais\n",jogos);
	printf("Inter:%d\n",vint);
	printf("Gremio:%d\n",vgre);
	printf("Empates:%d\n",empate);
	if (vint>vgre){
		printf("Inter venceu mais\n");
	} else if (vint<vgre){
		printf("Gremio venceu mais\n");
	} else printf("Nao houve vencedor\n");
	
	return 0;
}
