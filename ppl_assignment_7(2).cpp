/*7.Write a program to swap values of two elements. Use function and pass argument using 
call by Value and call by reference.*/
#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("values after swapping in fun a=%d &b=%d\n",*a,*b);
}
int main(){
	int a=1,b=2;
	printf("value before swapping in main a=%d & b=%d\n"a,b);
	swap(&a,&b);
	printf("values after swapping in main a=%d & b=%d",a,b);
	return 0;
}
