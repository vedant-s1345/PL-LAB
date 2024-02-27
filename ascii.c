#include<stdio.h>
int main(){
	char ch;
	int asc;
	printf("enter the character whose ascii value is to be found");
	scanf("%c",&ch);
	asc=(int)ch;
	printf("the ascii value of the given character %c is %d",ch,asc);
	return 0;
}
