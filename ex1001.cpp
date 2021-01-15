#include<stdio.h>
#include<locale.h>
int main () {
 setlocale(LC_ALL, "Portuguese");
 int A,B,X;
 scanf("%d",&A);
 scanf("%d",&B);
 X=A+B;
 printf("X = %d\n", X);
return 0;
}