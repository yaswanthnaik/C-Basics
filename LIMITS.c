#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\nSigned %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("short:\nunSigned %hd to %hu\n",0,USHRT_MAX);
	printf("int:\nSigned %d to %d\n",INT_MIN,INT_MAX);
	printf("int:\nunSigned %u to %u\n",0,UINT_MAX);
	printf("long:\nSigned %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("long:\nunSigned %lu to %lu\n",0,ULONG_MAX);
	printf("long_long:\nSigned %lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("long_long:\nunSigned %llu to %llu\n",0,LONG_LONG_MAX);
}
