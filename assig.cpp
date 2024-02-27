#include<stdio.h>
int main(){
	int i;
	char name[10];
	printf("enter the name of students");
	for(i=0;i<5;i++){
		printf("%d=",i+1);
		scanf("%s",&name[i]);
	}
	int arr[5],brr[5],crr[5],drr[5],err[5],n;
	printf("enter the number of subjects:");
	scanf("%d",&n);
	
	//taking input of marks
	printf("\n enter the marks of 1st student");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n enter the marks of 2st student");
	for(i=0;i<n;i++){
		scanf("%d",&brr[i]);
	}
	
	printf("\n enter the marks of 3st student");
	for(i=0;i<n;i++){
		scanf("%d",&crr[i]);
	}
	
	printf("\n enter the marks of 4st student");
	for(i=0;i<n;i++){
		scanf("%d",&drr[i]);
	}
	printf("\n enter the marks of 5st student");
	for(i=0;i<n;i++){
		scanf("%d",&err[i]);
	}
	//printing marks of each student
	printf("\nmarks of 1st student is:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nmarks of 2nd student is:");
	for(i=0;i<n;i++){
		printf("%d ",brr[i]);
	}
	
	printf("\nmarks of 3rd student is:");
	for(i=0;i<n;i++){
		printf("%d ",crr[i]);
	}
	
	printf("\nmarks of 4th student is:");
	for(i=0;i<n;i++){
		printf("%d ",drr[i]);
	}
	
	printf("\nmarks of 5th student is:");
	for(i=0;i<n;i++){
		printf("%d ",err[i]);
	}
	
	//checking if a student is passed or failed
	//for(i=0;i<n;i++){
	
	int count=0;
	/* for(i=0;i<n;i++){
		if(arr[i]<40)
		{
			printf("\n1st student is failed");
			break;
		}
		else{
			
			continue;
		}
		if(i=4){
			printf("\n1st student is passed");
		}
	}*/
		if(arr[0]>40 && arr[1]>40 && arr[2]>40 && arr[3]>40 && arr[4]>40 ){
			printf("\n1st student is passed");
			count=count+1;
		}
		else{
			printf("\n1st student is failed");
		}
		
		
		if(brr[0]>40 && brr[1]>40 && brr[2]>40 && brr[3]>40 && brr[4]>40 ){
			printf("\n2nd student is passed");
			count=count+1;
		}
		else{
			printf("\n2nd student is failed");
		}
		
		
		if(crr[0]>40 && crr[1]>40 && crr[2]>40 && crr[3]>40 && crr[4]>40 ){
			printf("\n3rd student is passed");
			count=count+1;
		}
		else{
			printf("\n3rd student is failed");
		}
		
		
		if(drr[0]>40 && drr[1]>40 && drr[2]>40 && drr[3]>40 && drr[4]>40 ){
			printf("\n4th student is passed");
			count=count+1;
		}
		else{
			printf("\n4th student is failed");
		}
		
		if(err[0]>40 && err[1]>40 && err[2]>40 && err[3]>40 && err[4]>40 ){
			printf("\n5th student is passed");
			count=count+1;
		}
		else{
			printf("\n5th student is failed");
		}
	    printf("\n %d number of students passed",count);
		
		int perc;
		perc=(count/5)*100;
		printf("\n percent of student passed is: %d",perc);
	return 0;
} 
