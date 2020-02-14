#include<stdio.h>
void main()
{
	int a[]={4,5,6,7,8,2,1};
	int *ptr[7];
	int sum=0, i;
	for(i=0; i<=7; i++)
	{
		ptr[i]=&a[i];
		sum=sum+*ptr[i];
	}
	printf("%d", sum);
}
