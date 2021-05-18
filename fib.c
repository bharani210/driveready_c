#include<stdio.h>
int fib(int num)
{
	int a=0,b=1,c;
	if(num==0)
	{
		return 1;
	}
	if(num==1)
	{
		return 1;
	}
	while(c<=num)
	{
		c=a+b;
		a=b;
		b=c;
		if(c==num)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int num,n;
	scanf("%d",&num);
	n=fib(num);
	if(n==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
