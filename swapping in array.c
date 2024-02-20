// to swap first element with last and last second element with second
#include<stdio.h>
int main(){
	int i,n,arr[10],temp;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the values of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("the array is: [");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("]\n");
	
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[(n-1)-i];
		arr[(n-1)-i]=temp;		
	}
	printf("the new array is: [");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("]");
	return 0;
}
