#include<stdio.h>
int main()
{
	int
	x=10,y=20,z=30;
	x += y;
	y -= z;
	z *= x;
	y /= z;
	
	printf("%d,%d,%d",x,y,z);
	
}
