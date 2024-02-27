//reverse using reccursion
#include<stdio.h>
int rev=0,rem;
int re(int n){
	if(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		return re(n);
	}
	else{
		return rev;
	}
}
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	int reverse=re(a);
	printf("reverse of the number is %d",reverse);
	return 0;
}
