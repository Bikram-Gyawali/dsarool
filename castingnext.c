#include<stdio.h>
void main() {
	int x;
	float y;
	void *vp=&x; // vp points to x
	*(int *)vp=10;
	printf("value of x:%d",x);
	vp=&y; //vp points to y;
	*(float *)vp =10.5;
	printf("\nValue of y:%f",y);
}
