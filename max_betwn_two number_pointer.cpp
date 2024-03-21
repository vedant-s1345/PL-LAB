#include<stdio.h>
void max(int *a,int *b){
	if(*a>*b){
		printf("%d is greater than %d",*a,*b);
	}
	else if(*a==*b){
		printf("%d is equal to %d",*a,*b);
	}
	else{
		printf("%d is greater than %d",*b,*a);
	}
}
int main(){
	int a,b;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	max(&a,&b);
	return 0;
}
