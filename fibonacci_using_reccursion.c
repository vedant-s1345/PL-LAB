#include<stdio.h>
void fibo(int n1,int n2,int n){
	int n3;
	if(n>0){
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		
	}
	fibo(n1,n2,n-1);
}
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	int n1=0,n2=1;
	printf("the fibbonacci series is:%d %d ",n1,n2);
	fibo(n1,n2,a-2);
	
	return 0;
}
