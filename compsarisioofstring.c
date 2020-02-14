#include<stdio.h>
void main(){
	char c[10]="bikram";
	char b[10]="bikram";
	 int n =strcmp(c,b);
	if(n<0){
	
	printf("string 1 is less then str 2");
}else if(n>0){
	printf("string 1 is  greater then str2");
}else{
	printf("the string is equal");
}
}
