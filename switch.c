#include<stdio.h>
int main()
{
int i,num1,fact,num2,num3,num4;
int a;

printf("enter 1 for factorial \n enter 2 for even odd \n enter 3 for positive and negative number \n enter 4 for square and cube");
scanf("%d",&a);
switch(a){
	case 1: fact=1;
			printf("enter the number whose factorial is to be calculated");
			
			scanf("%d",&num1);
			for(i=1;i<=num1;i++){
				fact=fact*i;
             }
			 printf("factorial of number is %d",fact);
			
				break;
				
	case 2: printf("enter the number");
			scanf("%d",&num2);
			if(num2%2==0){
				printf("%d is an even number",num2);
			}
			else{
				printf("%d is an odd number",num2);
			}
				break;
	
	case 3: printf("enter the number");
			scanf("%d",&num3);
			if(num3>0){
				printf("%d is an positive number ",num3);
			}
			else{
				printf("%d is an negative number",num3);
			}
				break;
	case 4: printf("enter the number whose square and cube is to be found");
			scanf("%d",&num4);
			printf("square of the number is %d and cube of the number is %d",num4*num4,num4*num4*num4);
				break;
}
	
return 0;
}
