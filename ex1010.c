#include<stdio.h>
int main (){
	int cod_1, qtd_1, cod_2, qtd_2;
	float uni_1, uni_2, ttl;
	scanf("%d",&cod_1);
	scanf("%d",&qtd_1);
	scanf("%f",&uni_1);
	scanf("%d",&cod_2);
	scanf("%d",&qtd_2);
	scanf("%f",&uni_2);
	ttl=((qtd_1*uni_1)+(qtd_2*uni_2));
	printf("VALOR A PAGAR: R$ %.2f\n", ttl);
	return 0;
}