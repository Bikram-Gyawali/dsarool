#include<stdio.h>
void main(){
	char a[15]=("my name is B");
	char b[10]=("bicky");
//	strcat(a,b);
	strncat(a,b,3);
	printf("the combined formis %s ",a,b);
	
}
