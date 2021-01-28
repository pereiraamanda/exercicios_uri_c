#include <stdio.h>

int main(){
	
	int A; int B;
	
	printf("");
	scanf("%d",&A);
	printf("");
	scanf("%d",&B);
	
	if((A % B == 0) || (B % A == 0)){
		printf("Sao multiplos\n");
	}
	else{
		printf("Nao sao multiplos\n");
	}
	
}
