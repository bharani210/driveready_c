#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(disarium(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}


int disarium(int num)
{
	int r,pos=0,sum=0,t,p;
	t=num;
	p=num;
	while(num)
	{
		num=num/10;
		pos++;
	}
	while(p)
	{
		r=p%10;
		p=p/10;
		sum=sum+pow(r,pos);
		pos--;
		if(sum==t)
		{
			return 1;
		}
	}
	return 0;
}
