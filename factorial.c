#include<stdio.h>
int fact=1;
int f(int num){
	int i;
		for(i=1;i<=num;i++){
			fact=fact*i;
		
		}
	
	return fact;	
}
	
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	// finding factorial of a number___________________________________________________________
	f(a);
	printf("factorial of the number is :%d",fact);
		
	return 0;
}
