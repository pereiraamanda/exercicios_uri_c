#include <stdio.h>

int main (){
	float kmLitro = 12;
	int tpViagem = 0;
	int vlMedia = 0;
	
	
	printf("");
	scanf("%i",&tpViagem);
	printf("");
	scanf("%i",&vlMedia);
	float qtdLitroNecessario = (((tpViagem * vlMedia) / kmLitro));
	printf("%.3f\n",qtdLitroNecessario);
	
}
