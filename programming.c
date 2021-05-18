#include<stdio.h>
int main()
{
	int num,n;
	scanf("%d",&num);
	n=find_evenfib(num);
	printf("%d",n);
	return 0;
}
int find_evenfib(int num)
{
	int a=0,b=1,c,evencount=1;
	if(num==1)
	{
		return a;
	}
	else
	{
		while(num)
		{
			c=a+b;
			a=b;
			b=c;
			if(c%2==0)
			{
				evencount++;
			}
			if(evencount==num)
			{
				return c;
			}
		}
	}
}
