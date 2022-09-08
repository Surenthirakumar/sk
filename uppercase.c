#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int
	upper=0,lower=0,num=0,special=0;;
	printf("please enter the string\n");
	gets(str);
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			upper++;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			lower--;
		}
		else if(str[i]>='1'&&str[i]<='9')
		{
			special++;
		}
	}
	printf("\nUpper case letters:%d",upper);
	printf("\nlower case letters:%d",lower);
	printf("\nNumberss:%d",num);
	printf("\nSpecial characters:%d",special);
	return 0;
}