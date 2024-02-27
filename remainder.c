// write the program to print remainder without using mod operator
#include<stdio.h>
int main(){
	int div,dis,quo,rem;
	printf("enter two numbers");
	scanf("%d%d",&div,&dis);
	quo=div/dis;
	rem= div-(quo*dis);
	printf("remainder is :%d",rem);
	return 0;
}
