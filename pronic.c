#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(ispronic(n))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

int ispronic(int n)
{
	int i=0;
	while(1)
	{
		if(i*(i+1)==n)
		{
			return 1;
		}
		if(i*(i+1)>n)
		{
			return 0;
		}
		i++;
	}
}
