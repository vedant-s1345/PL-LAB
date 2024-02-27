#include<stdio.h>
int cnt=0;
int count(int n){
	if(n>0){
		cnt++;
		n=n/10;
	count(n);
	}
	return cnt;
}
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int res=count(n);
	printf("number of digits in the number is %d",res);
	return 0;
}
