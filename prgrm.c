#include<stdio.h>
#include<time.h>
#define N 10
long fib_a(int);
long fib_b(int);
long fib_a(int n)
{
	if(n<=1)
	return 1;
	return fib_a(n-2)+fib_a(n-1);
}
long fib_b(int n)
{
	int i;
	int f[n];
	f[0]=1;
	f[1]=1;
	for (i=2; i<=n; i++)
	{
		f[i]=f[i-2]+f[i-1];
	}
	return f[n];
}
int main()
{
	double a,b,c,timeTakenByRec, timeTakenByDP;
	a=clock();
	printf("%ld\n", fib_a(N));
	b=clock();
	printf("%ld\n", fib_b(N));
	c=clock();
	timeTakenByRec = (b-a)/ CLOCKS_PER_SEC;
	timeTakenByDP = (c-b)/ CLOCKS_PER_SEC;
	printf("%lf\n",timeTakenByRec);
	printf("%lf\n",timeTakenByDP);
}
