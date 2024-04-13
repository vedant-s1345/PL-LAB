/*12. Write C program to find factorial of a number using recursion*/
#include<stdio.h>
int fact(int n){
	
	if(n>1){
		return n*fact(n-1);
	}

}
int main(){
	int n;
	printf("enter the number whose factorial is to be found");
	scanf("%d",&n);
	
	printf("factorial of %d is %d",n,fact(n));
	return 0;
}
