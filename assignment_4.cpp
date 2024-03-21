#include<stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	printf(" a=%d and b=%d",*a,*b);
}
int main(){
	int a=1,b=2;
	swap(&a,&b);
	return 0;
}
