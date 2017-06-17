#include<stdio.h>
int isTwinNo(long no)
{
	long divident=no/10000;
	long reminder=no%10000;
	if(divident==reminder)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{	
	long min=10000;
	long max=273972;
	for(long i=min;i<=max;i++)
	{
		if(isTwinNo(i*365)==1)
		{
			printf("No is %ld x 365 = %ld \n",i,i*365);
		}
	}
	return 0;
}
