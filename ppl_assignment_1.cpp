/*1. Write a program to calculate the salary of an employee given his basic pay (take input 
from user). Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of 
basic pay. Let an employee pay professional tax as 2% of total salary. Calculate net salary 
payable after Deduction.*/

#include<stdio.h>
int main(){
	int basic,hra,ta,total,tax,net;
	printf("enter the basic pay of the employee: ");
	scanf("%d",&basic);
	
	hra=basic/10;
	ta=basic/20;
	total=basic+hra+ta;
	tax=total/50;
	net=total-tax;
	printf("hra=%d   ta=%d   total=%d   tax=%d \n",hra,ta,total,tax);
	printf("net salary of the employee is %d",net);
	
	return 0;
}
