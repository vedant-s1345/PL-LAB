#include<stdio.h>
int main()
{
int i,num,fact;
int a;

printf("enter 1 for factorial \n enter 2 for even odd \n enter 3 for positive and negative number \n enter 4 for square and cube");
scanf("%d",&a);
switch(a){
	case 1: fact=1;
			printf("enter the number whose factorial is to be calculated ");
			
			scanf("%d",&num);
			for(i=0;i<=num;i++){
				fact=fact*i;
				
			} 
}			printf("factorial of number is %d",fact);
	
return 0;
}
