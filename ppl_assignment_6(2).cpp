/*6.Write a program generate Fibonacci series with and without using recursive function.*/

int c;
#include<stdio.h>
void fibo(int n,int a,int b){
	
	if(n>0){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		fibo(n-1,a,b);
	}
	
}
int main(){
	int n;
	int a=0,b=1;
	printf("enter the number of elements u want of fibonacci series : ");
	scanf("%d",&n);
	printf("fibonacci series is : 0 1 ");
	;fibo(n,a,b);
	
	return 0;
}
