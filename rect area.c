//area of the rectangle using functions
#include<stdio.h>
int area;
int a(int l,int b){
	area=l*b;
	return area;
}
int main(){
	int l,b;
	printf("enter the lemgth and bredth");
	scanf("%d%d",&l,&b);
	a(l,b);
	printf("area of the rectangle is %d",area);
	return 0;
}
