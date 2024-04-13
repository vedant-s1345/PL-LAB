/*7.Write a program to swap values of two elements. Use function and pass argument using 
call by Value and call by reference.*/

#include<stdio.h>
void swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	printf("values after swapping a=%d and b=%d\n",a,b);
}
int main(){
	int a=1,b=2;
	printf("values before swapping a=%d and b=%d\n",a,b);
	swap(a,b);
	return 0;
}
