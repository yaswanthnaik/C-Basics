#include<stdio.h>
int main()
{
	int a,b;
	int c,d,e,f;
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	{
	printf("enter your choice:\n 1.arthemetic\n 2.relational\n 3.bitwise operator\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("arthemetic");
			printf("enter your choice\n +\n -\n *\n /\n %%\n");
			scanf("%d",&d);
			switch(d)
			{
				case 1:
					printf("%d",a+b);
					break;
				case 2:
					printf("%d",a-b);
					break;
				case 3:
					printf("%d",a*b);
					break;
				case 4:
					printf("%d",a/b);
					break;
				case 5:
					printf("%d",a%b);
					break;
			}
			break;
		case 2:
			printf("relational");
			printf("enter your choice:\n <\n >\n =\n <=\n >=\n ");
			scanf("%d",&e);
			switch(e)
			{
				case 1:
					printf("%d",a<b);
					break;
				case 2:
					printf("%d",a>b);
					break;
				case 3:
					printf("%d",a=b);
					break;
				case 4:
					printf("%d",a<=b);
					break;
			    case 5:
					printf("%d",a>=b);
					break;
			}
			break;
		case 3:
		    printf("bitwise operator");	
		    printf("enter your choice:\n &\n |\n ^\n");
		    scanf("%d",&f);
		    switch(f)
		    {
		    	case 1:
		    		printf("%d",a&b);
		    		break;
		    	case 2:
		    		printf("%d",a|b);
		    		break;
		    	case 3:
		    		printf("%d",a^b);
		    		break;
		    		
			}
	}
    } 
}
