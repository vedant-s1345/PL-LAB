/*19. Write a C program to print following pattern.
1
12
123
1234
12345*/
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
