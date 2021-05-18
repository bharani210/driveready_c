#include<stdio.h>
int pos_fib(int num)
{
	int a=0,b=1,c=0,count=2;
	if(num==0)
	{
		return --count;
	}
	if(num==1)
	{
		return count;
	}
	while(c<=num)
	{
		c=a+b;
		a=b;
		b=c;
		count++;
		if(num==c)
		{
			return count;
		}
	}
	return 0;
}

int main()
{
	int num,n;
	scanf("%d",&num);
	n=pos_fib(num);
	if(n)
	{
		printf("%d",n);
	}
	else
	{
		printf("false");
	}
}
