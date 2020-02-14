#include<stdio.h>
void main() {
	char name[10];
	char string[]="Bicky bikram.c";
	strncpy(name,string,15);
	printf("copied string is:%s",name);
}
