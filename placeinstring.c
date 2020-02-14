#include<stdio.h>
void main(){
	char sub[10]="Cprogram";
	int i=0;
	while(sub[i]!='\0'){
		printf("%c is stored at  %u",&sub[i],&sub[i]);
		i++;
	}
}
