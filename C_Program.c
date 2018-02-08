#include<stdio.h>
void fi(int n)
{
	int c,a=0,b=1,i;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
int main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	fi(n);
	return 0;
}
