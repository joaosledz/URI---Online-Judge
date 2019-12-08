#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",t/365,(t%365)/30,(t%365)%30);
	return 0;
}
