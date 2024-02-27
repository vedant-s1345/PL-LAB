#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b){
		if(a>c){
			printf("a(%d) is the greatest number",a);
		}
		else{
			printf("c(%d) is the greatest number",c);
		}
		if(c>b){
			printf("b(%d) is the smallest number",b);
		}
		
	}
	else if (b>a){
		if(b>c){
			printf("b(%d) is the greatest number",b)
		}
		
	}
return 0;
}
