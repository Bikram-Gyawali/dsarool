#include<stdio.h>
void main() {
	char a[10];
	char b[10];
	printf("enter the first string");
	scanf("%s",&a);
	printf("enter the second string");
	scanf("%s",&b);
	int n =strcmp(a,b);
	if(n<0) {
		printf("string 1 is less then str 2");
	} else if(n>0) {
		printf("string 1 is  greater then str2");
	} else {
		printf("the string is equal");
	}
}
