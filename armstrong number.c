#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t=n;
	int t1=n;
	int l=0;
	while(n>0)
	{
		n=n/10;
		l++;
	}
	int r,sum=0;
	while(t>0)
	{
		r=t%10;
		sum=sum+pow(r,l);
		t=t/10;
	}
	if(sum == t1)
	{
		printf("Armstrong");
	}
	else
	{
		printf("not armstrong");
	}
}
