#include<stdio.h>
void main() {
	int x=10;
	printf("value of x=%d",x);
	printf("\nAddress of x=%u",&x);
	printf("\nValue of x=%d",*(&x));
	getch();
}
