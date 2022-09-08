#include<stdio.h>
int main()
{
	char gp;
	int sal;
	float bonus,tot;
	printf("enter grade of worker:");
	scanf("%s",&gp);
	printf("enter salary:");
	scanf("%d",&sal);
	if(gp=='a' || gp=='A')
	{
		if(sal<10000)
		{
			bonus=sal*0.7;
		}
		else
		{
			bonus=sal*0.05;
		}
	}
	else if(gp=='b' || gp=='B')
	{
		if(sal<10000)
		{
			bonus=sal*0.12;
		}
		else
		{
			bonus=sal*0.10;
		}
	}
	printf("\nSalary : %d",sal);
	printf("\nBonus : %f",bonus);
	tot=sal+bonus;
	printf("\ntotal salary : %f",tot);
}
