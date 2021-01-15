#include<stdio.h>
int main (){
	int cod, qtd;
	float ttl;
	scanf("%d",&cod);
	scanf("%d",&qtd);
	switch(cod) {
		case 1:
			ttl=qtd*4.00;
			break;
		case 2:
			ttl=qtd*4.50;
			break;
		case 3:
			ttl=qtd*5.00;
			break;
		case 4:
			ttl=qtd*2.00;
			break;
		case 5:
			ttl=qtd*1.50;
			break;
	}
		printf("Total: R$ %.2f\n", ttl);
	
	return 0;
}