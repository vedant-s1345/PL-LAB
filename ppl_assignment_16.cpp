/*16. Write a C program to perform following operations:
1. Length of the String
2. Reverse of the String
3. Concatenation of two Strings
4. Copying one string to another*/


#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100],str3[100];
	int n;
	printf("enter the first string ::");
	scanf("%s",&str1);
	printf("enter the second string ::");
	scanf("%s",&str2);
	printf("now select what operation u want to perform \n 1)find length of the string \n2)find reverse of the  string \n3)concatinate two strings\n4)copy the string \n:");
	scanf("%d",&n);
	switch (n){
		case 1: // Length of the String
				printf("length of the string 1 is %d",strlen(str1));
				break;
		case 2: //reverse of the string
				printf("reverse of the string is %s",strrev(str1));
				break;
		case 3://concatination of two string
				printf("concatinated string is %s",strcat(str1,str2));
				break;
		case 4://copying string 1 into string 3
				printf("str 1=%s & str3=%s ",str1,strcpy(str3,str1));
	}
	return 0;
}
