#include<stdio.h>
void main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are elligible for voting....");
	}
	else if(age<18 && age>0)
	{
		printf("not elligible to vote , you are elligible to vote after  ");
		printf("%d",18-age);
		printf("  years...");
	}
	else
	{
		printf("INVALID INPUT...");
	}
}
