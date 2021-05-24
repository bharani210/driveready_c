#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(harshad(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

int harshad(int num)
{
	int r,sum=0,t;
	t=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	if(t%sum==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
