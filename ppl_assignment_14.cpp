/*14. Write C program to perform following matrix operations:
1. Read two matrices from user
2.Display two matrices
3. Find sum of two matrices*/
#include<stdio.h>
int main(){
	int i,j,mat1[10][10];
	int mat2[10][10];
	int res[10][10];
	printf("enter the values of matrix mat1 : ");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the values of matrix mat2 : ");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("the sum of mat1 and mat2 is : \n");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",mat1[i][j]);
		}
		printf("\n");;
	}
	printf(" + \n");
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	} 
	printf(" == \n");
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",mat1[i][j]+mat2[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
________
