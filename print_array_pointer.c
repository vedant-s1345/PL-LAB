#include<stdio.h>

int main(){
	int arrey[100],n,i;

	printf("enter the number of values in array");
	scanf("%d",&n);
	printf("enter the values of the array");
	for(i=0;i<n;i++){
		scanf("%d",&arrey[i]);
	}
	int *ptr = &arrey;
	for(i=0;i<n;i++){
		printf("%d ",ptr[i]);
	}

	return 0;
}
