#include<stdio.h>
int main()
{
	int sal,tax;
	printf("Enter income: ");
	scanf("%f",&sal);
	if(sal>0 && sal<=150000)
	{
		printf("No tax...");
	}
	else if(sal>150000 && sal<=300000)
	{
		tax=sal*0.1;
		printf("tax = %d",tax);
	}
	else if(sal>300000 && sal<=500000)
	{
		tax=sal*0.2;
		printf("tax = %d",tax);
	}
	else if(sal>500000)
	{
		tax=sal*0.3;
		printf("tax = %d",tax);
	}
	else
	{
		printf("INVALID INPUT");
	}
	return 0;
}
