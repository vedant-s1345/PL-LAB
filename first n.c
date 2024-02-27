#include<stdio.h>
int main(){
	//write the program to print n terms of natural number and there sum
	
	int i,j,n;
	printf("enter value of n");
	scanf("%d",&n);
	printf("the natural numbers up to %d are : ",n);
	for(i=1;i<=n;i++){
		printf("%d  ",i);
	}
	int sum=0;
	for(j=0;j<=n;j++){
		sum=sum+j;
	}
	printf("sum of %d natural numbers is : %d",n,sum);
	return 0;
}
