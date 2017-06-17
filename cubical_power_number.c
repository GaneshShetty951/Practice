#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter vale for n");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	int divident=n/100;
	int reminder; 
	if(divident<=0)
		printf("The integer %d does not have 3 digits\n ",n);
	else if(divident>=10)
		printf("The integer %d have more than 3 digits\n ",n);
	else
	{
		while(temp>0)
		{
			reminder=temp%10;
			sum=sum+(int)pow(reminder,3);
			temp=temp/10;
		}
		if(n==sum)
		{
			printf("The integer %d is equal to the sum of the cubes of its digits\n",n);
		}else{
			printf("The integer %d is not equal to the sum of the cubes of its digits\n",n );
		}
	}
	return 0;
}