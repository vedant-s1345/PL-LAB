#include<stdio.h>
int main(){
	int i,j,a,b,arr[20][20],total[20],countf[20][20],per[20];
	char name[10];
	printf("enter the number of students in the class : ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("student %d :",i+1);
		scanf("%s",&name[i]);
	}
	//entering the marks of each students
	printf("enter  number of subjects ");
	scanf("%d",&b);
	for(i=0;i<a;i++){
		printf("enter the marks of student %d \n",i+1);
		for(j=0;j<b;j++){
			printf("subject %d :",j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	total[0]=0;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arr[i][j]>40){
				total[i]=total[i]+arr[i][j];
				per[i]=(total[i]/b);
			}
			else{
				countf[i][j+1];
			}
		}
		printf("\ntotal marks of  student %d is: %d",i+1,total[i]);
		printf("\ntotal percentage acquired by the student %d is: %d",i+1,per[i]);
		printf("\n student %d failed in %d subjects",i+1,countf[i][j]);
	}
		
	return  0;
}
