#include<stdio.h>
int numfn( int num)
{
	if(num==1)
	{
		return 0;
	}
	if(num%2==0)
	{
		printf(" %d",num/2);
		return 1+numfn(num/2);
	}
	else
	{
		printf(" %d",3*num+1);
		return 1+numfn(3*num+1);
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",num);
	numfn(num);
	return 0;
}
