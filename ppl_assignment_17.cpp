/*17.Write C program to print all VOWEL and CONSONANT characters separately*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[100],con[100],vov[100];
	int i,j,a;
	printf("enter the string :");
	scanf("%s",&str);
	a=strlen(str);
	for(i=0;i<a;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			for(j=0;j<20;j++){
				if(vov[j]=='\0'){
					str[i]=vov[j];
				}
			}
		}
		else{
			for(j=0;j<20;j++){
				if(con[j]=='\0'){
					str[i]=con[j];
				}
			}
		}
	}
	printf("vowel characters are %s\n",vov);
	printf("consonant characters are %s",con);
	return 0;
}
