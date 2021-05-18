#include<stdio.h>
int find_fib(int num)
{
	int a=0,b=1,c,n=2;
	if(num==1)
	{
		return a;
	}
	if(num==2)
	{
		return b;
	}
	while(num)
	{
		c=a+b;
		a=b;
		b=c;
		n++;
		if(n==num)
		{
			return c;
		}
	
	}
}

int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_fib(num);
	printf("%d",n);
	return 0;
}
