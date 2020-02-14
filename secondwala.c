#include<stdio.h>
void main() {
	int a=1,b=2,c=3,d=4,e=5;
	int *p[5];
	int i;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	p[3]=&d;
	p[4]=&e;
	for(i=0; i<5; i++) {
		printf("\np[%d]=%d",i,*p[i]);
	}
}
