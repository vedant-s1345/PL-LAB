#include<stdio.h>
int main()
{
	int i,j;
	char name[10];
	printf("Enter names of student: ");
	for (i=0;i<5;i++){
		printf("%d = ",i+1);
		scanf("%s",&name[i]);
	}
	int arr[5],n;
	printf("\nEnter the number of subject: ");
	scanf("%d",&n);

	// Taking marks of student:

	for(i=0;i<8;i++){
		printf("enter the marks of subject %d :\n",i+1);
	
			scanf("%d",&arr[i]);
	}
return 0;
}
