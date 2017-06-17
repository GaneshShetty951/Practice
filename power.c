#include<stdio.h>
#include<math.h>
int main()
{
	double n,p;
	int i=0;
	int flag=0;
	printf("Enter the value for n :");
	scanf("%lf",&n);
	printf("Enter the value for p :");
	scanf("%lf",&p);
	while(pow(i,n)<=p)
	{
		if(pow(i,n)==p)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("No such integer k");
	else
		printf("k=%d\n",i);
	return 0;
}