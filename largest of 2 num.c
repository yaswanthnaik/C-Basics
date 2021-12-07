#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two given numbers");
	scanf("%d%d",&num1,&num2);
	if (num1>num2)
	{
	printf("%d is largest\n",num1);
    }
    else if(num2>num1)
    {
    	printf("%d is largest\n",num2);
	}
}
