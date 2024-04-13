/*13. Write C program to reverse an integer number using recursion.*/
#include<stdio.h>
int rev=0;
int reverse(int n){
	
	if(n>0){
		int rem=n%10;
		rev=rev*10+rem;
		return reverse(n/10);
	}
	else{
		return rev;
	}
	
}
int main(){
	int n,rem;
	printf("enter the number whose reverse is to be found :");
	scanf("%d",&n);
	printf("reverse of num %d is %d",n,reverse(n));
	return 0;
}
