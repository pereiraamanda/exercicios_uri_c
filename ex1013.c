#include<stdio.h>
#include<locale.h>
#include<math.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, MaiorAB, MaiorABC;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	MaiorAB= (a+b+abs(a-b))/2;
	MaiorABC = (MaiorAB + c + abs(MaiorAB-c))/2;
	printf("%d eh o maior\n",MaiorABC);
	
	return 0;
}