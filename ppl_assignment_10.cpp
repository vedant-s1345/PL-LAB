/*10. Write a program to define a structure for customer bank account that holds information 
like account number, name of account holder, balance, internet banking facility availed (Yes 
or No), account type (saving, recurring, deposit):
a) Read account details for N customers.
b) Identify the golden, silver and general customers.
c) Golden customers: Balance > 10, 00,000. Silver Customers: Balance > 5, 00, 000 and 
< 10, 00,000. General customers: Balance <5, 00, 000.
d) Display the list of customers availing the internet banking facility*/
#include<stdio.h>
#include<string.h>
struct bank{
char customer_name[20];
int balance;
int pin_code;
char account_type[20];
char internet_facility;
}customer[100];
int main(){
int i,n;
char internet_banking_facility[200];

printf("enter number of customers:");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("enter customer name:");
scanf("%s",customer[i].customer_name);
printf("enter account balance:");

scanf("%d",&customer[i].balance);
printf("enter pin code(422001 to 422013):");
scanf("%d",&customer[i].pin_code);
printf("enter account type :"); //saving,recurring,deposit
scanf("%s",&customer[i].account_type);

// type of customers
if((customer[i].balance )>=1000000)
{
printf(" customer type:golden customers \n");
} 

else if((customer[i].balance )>=500000 && (customer[i].balance)<1000000) {
printf("customer type:silver customers \n");
} 

else if ((customer[i].balance )>500000) {
printf("customer type:general customers \n");
}

printf("internet Facility available yes=a,no=b: \n");
scanf("%s",&customer[i].internet_facility);
}

printf("customer names having internet banking facility available: \n");
for(i=0;i<n;i++){
if( customer[i].internet_facility == 'a')
{

 printf("%s\n",customer[i].customer_name);
 
strcpy(internet_banking_facility, customer[i].customer_name);
}
}
return 0;
}

