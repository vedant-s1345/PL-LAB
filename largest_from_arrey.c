#include<stdio.h>
int main(){
	int i,arr[10],num;
	printf("enter the size of an arrey");
	scanf("%d",&num);
	printf("enter the values of arrey ");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("[");
	for(i=0;i<num;i++){
	printf("%d ",arr[i]);
	}
	printf("]");

	for(i=0;i<num;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}	
	}
	printf("largest number is %d",arr[0]);
	return 0;
}
