#include<stdio.h>
int main(){
int i,j,mat1[2][2],mat2[2][2],a,b;
printf("enter values of matrix 1 :");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		scanf("%d",&mat1[i][j]);
	
	}	
}printf("\n");
printf("enter values of matrix 2 :");
for(a=0;a<2;a++){
	for(b=0;b<2;b++){
		scanf("%d",&mat2[a][b]);
		
	}	
}printf("\n");
printf("\n");

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("%d ",mat1[i][j]);
		
	}printf("\n");
}printf(" + ");

for(a=0;a<2;a++){
	for(b=0;b<2;b++){
		printf("%d ",mat2[a][b]);
		
	}printf("\n");
}


	return 0;
}
