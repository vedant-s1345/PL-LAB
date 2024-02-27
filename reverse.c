//reverse of the  number
#include<stdio.h>
int main(){
	int n,rem,rev;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("thr reverse of the number is %d",rev);
	return 0;
}
