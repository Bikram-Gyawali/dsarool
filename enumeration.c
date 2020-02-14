//enumeration ---enum....
#include<stdio.h>
enum days {sunday,monday,tuesday,wednesday,thursday,friady,saturday};
void main() {
	int days;
	enum days d;
	printf("Enter the days");
	scanf("%d",&days);
	d=days;
	if(d == saturday) {
		printf("The day is holyday");
	} else {
		printf("It is working day");
	}
}

