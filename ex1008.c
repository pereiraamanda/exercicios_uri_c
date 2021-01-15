#include<stdio.h>
int main (){
	int number, time;
	float salary_time, salary;
	scanf("%d",&number);
	scanf("%d",&time);
	scanf("%f",&salary_time);
	salary=time*salary_time;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
	
}