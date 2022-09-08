#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("enter username:");
	scanf("%s",&a);
	printf("ReEnter username:");
	scanf("%s",&b);
	if(strcmp(a,b)==0)
	{
		printf("valid username");
	}
	else
	{
		printf(" invalid");
	}
}