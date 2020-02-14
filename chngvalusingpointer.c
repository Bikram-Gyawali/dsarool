#include<stdio.h>
void main() {
	int x=10;
	int *p=&x;
	printf("\n\n\n");
	*p=25;
	printf("vALUE OF X:%d",x);
}
