#include<stdio.h>
struct complex{
	int real;
	int image;
}s1,s2,s3;
int main(){
	int a;
	struct complex s1={1,2};
	struct complex s2={3,4};
	struct complex s3={s1.real+s2.real , s1.image+s2.image};

	struct complex s4={s1.real*s2.real-s1.image*s2.image,s1.real*s2.image+s1.image*s2.real};

	
	printf("choose what u want to perform: \n1)reading the complex number\n2)printing the complex number\n3)addition of complex number\n4)multiplication of complex number\n");
	scanf("%d",&a);
	switch(a){
		case 1://reading the complex number
			printf("complex number is: %d+i%d",s1.real,s1.image);
			break;
		case 2://printing thr complex number
			printf("complex number is: %d+i%d",s1.real,s1.image);
			break;
		case 3://addition of complex number
			printf("sum of complex number (%d + i%d) + (%d + i%d)=(%d + i%d)\n",s1.real,s1.image,s2.real,s2.image,s3.real,s3.image);
			break;
		case 4://multiplication of complex number
			printf("multiplication  of complex number (%d + i%d) * (%d + i%d)=(%d + i%d)",s1.real,s1.image,s2.real,s2.image,s4.real,s4.image);	
		    break;
	}
	return 0;
	
}
