#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("the number is %d is greather than the number %d\n",a,b);
	}
	else{
		printf("the number %d is greather than the number %d\n",b,a);
		
	}
	return 0;
}
