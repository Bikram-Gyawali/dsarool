#include<stdio.h>
struct student{
	char *name;
	int id;
	int rollno;
	
};
main(){
	struct student s1, s2;
	s1.name="bicky";
	s1.id=5;
	s1.rollno=5;
	
	printf("name is %s\n",s1.name);
	printf("id is %d",s1.id);
}
