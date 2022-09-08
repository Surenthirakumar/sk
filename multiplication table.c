	#include<stdio.h>
int main()
{
	int i,a,b,r;
	printf("enter table value:");
	scanf("%d",&a);
	printf("\nenter up to value:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		r=i*a;
		printf("%d x %d = %d",a,i,r);
		printf("\n");
	}
}
