#include<stdio.h>
int main(){
	float basic,hra,ta,tax,total,net;
	printf("enter the basic pay");
	scanf("%f",&basic);
	ta=(5/100)*basic;
	hra=(10/100)*basic;
	total=basic+ta+hra;
	tax=(2/100)*total;
	net=total-tax;
	printf("ta is :%f , hra is :%f, total is: %f, tax is:%f",ta,hra,total,tax);
	printf("net payable salary is:%f",net);
	return 0;
}
