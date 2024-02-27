#include<stdio.h>
//const float pi=3.14;

float arc(float r){
	float area;
	area=3.14*r*r;
	return area;	
}
	
int main(){
	
	float r,x;
	printf("enter the radius");
	scanf("%d",&r);
	x=arc(r);
	printf("area of circle is: %f",x);	
	return 0;
}
