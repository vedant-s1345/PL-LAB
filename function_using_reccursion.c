//check if a number is prime or not
#include<stdio.h>
int fact=1;
int fib(int num){
	if(num==1){
		return fact;
	}
	else{
	fact=num*fact;
	num=num-1;
	return fib(num);
	//return num*fib(num-1);
	}
}
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	
	int res=fib(a);
	printf("the factorial of the given number is %d",res);
	
return 0;
}
