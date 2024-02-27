#include<stdio.h>
int main(){
	int a,b,c,d,e,agg,total;
	printf("enter the marks of all five subjects");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	if(a>40 && b>40 && c>40 && d>40 && e>40){
		total=a+b+c+d+e;
		agg=(total/5);
		printf("you are passed\n");
		
		if(agg>75){
			printf("your grade is distinction as you have scored %d",agg);
		}
		else if(60>agg && agg<75){
			printf("your grade is first class as you have scored %d",agg);
		}
		else if(50>agg && agg<60){
			printf("your grade is second class as you have scored %d",agg);
		}
		else if(40>agg && agg<50){
			printf("your grade is third class as you have scored %d",agg);
		}
		
	}
	else{
		printf("you are failed");
	}
	return 0;
	
}
