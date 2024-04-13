/*9. A class teacher wants to keep record of 10 students in the class along with the names and 
marks
obtained in 5 subjects. Write a C program with structure that displays :
a) Overall percentage result of the class
b) Total number of passing students in the class,
c) Total number of students failing in one subject
d) Total number of distinctions in the class*/


#include<stdio.h>
struct student{
    char name[20];
    int marks[10];
};

 int n,i,j,m;
int main(){
struct student s1[10];
    printf("enter a number of students:");
    scanf("%d",&n);
    printf("enter a number of subjects:");
    scanf("%d",&m);
    
    for(i=0;i<n;i++){
        printf("enter a name of student %d :",i+1);
        scanf("%s",s1[i].name);
    }
    for(i=0;i<n;i++){
    	printf("\nenter marks of student %d",i+1);
        int total=0;
        for(j=0;j<m;j++)
        {
            printf("\nmarks of subject %d:",j+1);
            scanf("%d",&s1[i].marks[j]);
            total=total+s1[i].marks[j];
            
        }   
        	printf("\n total marks of student :%d",total);
            float per;
            per=(total/m);
            printf("\n percentage of student :%f",per);

        
    }
    
     int pass_count=0;
     int fail_count=0;
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
			if(s1[i].marks[j]<40){
				fail_count++;
				break;
			}
			else{
				continue;
			}
    	}
	}
	printf("\nnumber of students failed are : %d",fail_count);
	printf("\nnumber of students passed are : %d",n-fail_count);
    return 0;
}

