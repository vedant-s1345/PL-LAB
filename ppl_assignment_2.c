/*2. Write a program to accept marks of five courses and if student is pass then find the grade 
obtained by student. If student scores aggregate greater than 75%, then the grade is 
distinction. If aggregate is 60>and <75 then the grade is first division. If aggregate is >=50 
and <60 then the grade is second division. If aggregate is >=40 and <50 then the grade is 
third division.*/


#include <stdio.h>

int main() {

 int sub1, sub2, sub3, sub4, sub5; 
 int total, max;
 float agg;
 //get input from user for marks of 5 subjects
 printf("Enter marks of the 1st subject: ");
 scanf("%d", &sub1); 
 printf("Enter marks of the 2nd subject: ");
 scanf("%d", &sub2);
 printf("Enter marks of the 3rd subject: ");
 scanf("%d", &sub3);
 printf("Enter marks of the 4th subject: ");
 scanf("%d", &sub4);
 printf("Enter marks of the 5th subject: ");
 scanf("%d", &sub5);

 //calculating total marks 
 total=sub1 + sub2 + sub3 + sub4 + sub5;

 //calculating aggregate
 agg = (total) / 500;  

 //checking the grade of stdent 
 if (agg >= 0.75) {
 printf("Grade: Distinction\n");
 }
 else if (agg >= 0.6 && agg < 0.75) {
 printf("Grade: First Division\n");
 }
 else if (agg >= 0.5 && agg < 0.6) {
 printf("Grade: Second Division\n");
 }
 else if (agg >= 0.4 && agg < 0.5) {
 printf("Grade: Third Division\n");
 }
 else {
 printf("Grade: Fail\n");
 }
 
 return 0;
}
