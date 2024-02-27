#include<stdio.h>
union employee{
	char name[10];
	char desig[20];
	int basic;
}emp;
int main(){
	int ta,da,gross,i;
	for(i=0;i<4;i++)
	{
		printf("\nenter the name :");
		scanf("%s",&emp.name);
		printf("enter the designation of employee :");
		scanf("%s",&emp.desig);
		printf("enter the basic pay of the employee :");
		scanf("%d",&emp.basic);

		ta=emp.basic/20;
		da=emp.basic/50;
	
		gross=emp.basic+ta+da;
		printf("the gross salary of the employee is %d ",gross);
	}
	return 0;
}
