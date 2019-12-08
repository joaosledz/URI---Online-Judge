#include <stdio.h>

int main(){
	char a[30],b[10]; 
	int atual,MAX,i;
	scanf("%d",&MAX);
	for(i=1;i<=MAX;i++){
		scanf("%d",&atual);
		if (atual==0){
		 printf("NULL\n");
		}else{
		 if(atual%2==0){
			 printf("EVEN ");
		} else  printf("ODD ");;
		 if(atual<0){
			    printf("NEGATIVE\n");;
		} else  printf("POSITIVE\n");;
		}
	}
	return 0;
}
