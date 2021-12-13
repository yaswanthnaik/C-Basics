#include<stdio.h>
int main()
{
	int a,b,c;
	a=9,b=10,c=9;
	if(a>b||(c+a)<(b-c))
	{
		b=(12+10)+a;
		b=c+b;
	}
	else
	{
	   c=c+c;
	}
    printf("%d",a+b+c);
}

