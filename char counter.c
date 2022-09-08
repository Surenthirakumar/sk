#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	int low=0,up=0,num=0;
	printf("enter :");
	scanf("%c",&ch);
	if(ch=='*')
	{
		printf("End...");
	}
	else
	{
		while(ch!='*')
		{
			if(isupper(ch))
			{
				up++;
			}
			else if(islower(ch))
			{
				low++;
			}
			else if(isdigit(ch))
			{
				num++;
			}
			else if(ch=='*')
			{
				printf("End...");
			}
			scanf("%c",&ch);
		}
		printf("total uppercase count = %d",up);
		printf("\ntotal lowercase count = %d",low);
		printf("\ntotal number count = %d",num);
	}
}
