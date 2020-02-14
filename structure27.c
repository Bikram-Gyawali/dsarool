#include<stdio.h>
	struct student{
		char name[20];
		int roll_no;
		int id;
		
	};
 void main(){
	struct student bicky={"bicky",3,369};
	printf("name is %s %d %d",bicky.name,bicky.roll_no,bicky.id);
}
