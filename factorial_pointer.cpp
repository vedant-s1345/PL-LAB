#include<stdio.h>

int main(){
	int a,i,fact=1;
	printf("enter the number");
	scanf("%d",&a);
	int *ptr=&a;
	for(i=1;i<=a;i++){
	fact=i*fact;	
	}
	printf("factorial :%d",fact);
	
return 0;
}
