/*6.Write a program generate Fibonacci series with and without using recursive function.*/


#include<stdio.h>
int main(){
	int n,i;
	printf("enter the number of elements u want of fibonacci series : ");
	scanf("%d",&n);
	int a=0,b=1,c;
	printf("the fibonacci series is : %d %d ",a,b);
	for(i=2;i<n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;	
	}
	
	return 0;
}
