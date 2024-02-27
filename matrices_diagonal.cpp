#include<stdio.h>
int main(){
	int i,j,mat1[10][10];
	//int mat2[10][10];

	printf("enter the values of matrix mat1 : ");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("the matrix is : \n");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("the diagonal elements are : ");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			if(i==j){	
			printf("%d ",mat1[i][j]);
			}
		}
	}

	
	return 0;
}
