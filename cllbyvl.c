#include<stdio.h>
#include<conio.h>
/*in call by value original value cannot be changed or moidified.in call by value 
when we pass value to the fubnction it is locally stored bvy the fncn paramneter
in stack memory location.if u change the value of function parameter it is changed for the current fncn
only but it is not change the value of variable inside theccccaller method such as main()*/
void swap(int a,int b){
	int temp;
	a=b;
	b=temp;
}
void main(){
	int a=100,b=200;
	swap(a,b);
	printf("value of a:%d",a);
	printf("value of b:%d",b);
}
