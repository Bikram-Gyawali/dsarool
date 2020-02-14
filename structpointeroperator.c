#include<stdio.h>
struct emp{
	char name[20];
	float salary;
};
void main(){
	struct emp *e ,e1;
	e=&e1;
	printf("emp info\n");
	printf("enter name ");
	scanf("%s",e->name);
	printf("enter salary");
	scanf("%f",&e->salary);
	
	printf("emp name:%s\n emp salary:%f",e->name,e->salary);
}
