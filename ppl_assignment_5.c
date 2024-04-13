/*5.Write a C program to store N numbers in an array and compute the sum of all even and 
odd numbers in an arra*/

#include <stdio.h>
int main(){
//declaring and assigning values to int variables
    int n,even=0,odd= 0;       
	// declaring an array with 10 elements 
    int arr[10],i=0;           
    printf("Enter number of elements in the array: ");
    //input for number of elements in an array
    scanf("%d",&n);   
	   //using while loop for iterating through the array
    while(i<n)     
    {
        printf("Enter values of array with index %d:",i);
        //taking input in the array
        scanf("%d",&arr[i]);    
		//checking for even condition    
        if(arr[i]%2 == 0)       
        {
            even = even+arr[i];         //storing sum of even in the variable named even
        }
        else{
            odd = odd+arr[i];       //storing sum of odd numbers in the variable named odd
        }
        i++;
        
    }
    //printing the final result
    printf("\n Even addition: %d \n Odd addition: %d",even,odd); 
    return 0;
}

