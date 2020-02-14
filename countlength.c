#include<stdio.h>
void main(){
	char sub[10]="Cprogram";
	int i=0;
	int count=0;
	while(sub[i]!=0){
		printf("%c is stored at %p\n",sub[i],&sub[i]);
		i++;
		count =count + 1;
	}
	printf("the length is %d",count)
}
