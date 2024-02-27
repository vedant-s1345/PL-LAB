#include<stdio.h>
int main(){
// write a program to find sum and avg of 5 numbers accept 5 numbers as input from user
int i,n,multi;
printf("enter the number whose table you want to know: ");
scanf("%d",&n);
for(i=1;i<=10;i++){
	multi=n*i;
	printf("%d * %d = %d\n",n,i,multi);
}


	return 0;
}
