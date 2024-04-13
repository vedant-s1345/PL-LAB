/*15. Write a program in C to find the maximum number between two numbers using a pointer*/

#include <stdio.h>

int main()
{
 int num1,num2,*ptr1=&num1,*ptr2=&num2;
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2);
 if(*ptr1>*ptr2)
 {
  printf("\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n %d is the maximum number.\n\n",*ptr2);
 }
 return 0;
}
