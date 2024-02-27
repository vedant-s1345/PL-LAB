#include <stdio.h>
	struct bank
	{
	 int acc_no[30];
	 char name[60];
	 float balance[90];
	 char acc_type;
	 char ibf[10];
	 int pincode;
	 	};
		int main()
		{
			int i,n;
				printf("Enter the value of N");
			scanf("%d",&n);
				struct bank cust[n];
			for (i=0; i<=n; i++)
			{
			printf("Enter account number for customer %d \n",i+1);
			scanf("%d",&cust[i].acc_no);
			printf("Enter account holders name:");
			scanf("%s",cust[i].name);
			printf("Enter account balance:");
			scanf("%f",&cust[i].balance);

			 for(i=1;i<=n;i++)
			 {
			 	if(cust[i].ibf =="yes")
			 	
			 		printf("The customer avails internet banking facility");
			  else
				 printf("The customer doesnt avail internet banking facility");
			 
			 if(cust[i].balance>1000000)
			 printf("You are a Golden customer");
			 else if (100000>cust[i].balance>500000)
			 printf("You are a Silver customer");
			 else
			 printf("You are a general customer");
			 return 0;
		}
	}
	
