#include<stdio.h>
int main (){
	double A, B, MEDIA, Pa=3.5, Pb=7.5;
	scanf("%lf",&A);
	scanf("%lf",&B);
	MEDIA=((Pa*A)+(Pb*B))/(Pa+Pb);
	printf("MEDIA = %.5lf\n", MEDIA);
	return 0;
}