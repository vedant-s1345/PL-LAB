#include<stdio.h>
int main(){
	int a,b,i;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(b<a){
	
		for(i=b;i>0;i--){
			if(a%i==0 && b%i==0){
				printf("GCD is %d",i);
				break;
			}
		}
	}
	else{
		for(i=a;i>0;i--){
			if(a%i==0 && b%i==0){
				printf("GCD is %d",i);
				break;
			}
		}		
	}
	return 0;
}
