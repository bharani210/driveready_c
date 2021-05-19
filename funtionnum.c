#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",num);
	numfn(num);
	return 0;
	
}

int numfn(int num)
{
	int even,odd;
	while(num>1)
	{
		if(num%2==0)
		{
			even=num/2;
			printf(" %d",even);
			num=even;
		}
		else
		{
			odd=3*num+1;
			printf(" %d",odd);
			num=odd;
		}
    }
}
