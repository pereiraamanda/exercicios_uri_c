#include<stdio.h>
int main (){
	double A, B, C, MEDIA, Pa=2.0, Pb=3.0, Pc=5.0;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	MEDIA=((Pa*A)+(Pb*B)+(Pc*C))/(Pa+Pb+Pc);
	printf("MEDIA = %.1lf\n", MEDIA);
	return 0;
}