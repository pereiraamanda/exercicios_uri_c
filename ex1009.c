#include<stdio.h>
int main (){
	char nome[20];
	double sal_fixo, ttl_ven, com=0.15, receber;
	scanf("%s", &nome);
	scanf("%lf", &sal_fixo);
	scanf("%lf", &ttl_ven);
	receber=(0.15*ttl_ven)+sal_fixo;
	printf("TOTAL = R$ %.2lf\n", receber);
	return 0;
}