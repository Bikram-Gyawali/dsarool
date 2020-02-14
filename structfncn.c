#include<stdio.h>
struct student {
	char *name;
	int id;
	int rollno;

};
struct student s[20];
int i;
userinput() {
	for (i=0; i<=2; i++) {
		printf("info %dst stdent",i+1);
		printf("enter name");
		scanf("%s",&s[i].name);
		printf("enter id:");
		scanf("%d",&s[i].id);
		printf("Enter roll no");
		scanf("%d",&s[i].rollno);
	}
	for(i=0;i<=2;i++){
		printf("all names are %s",&s[i].name);
	}

}

void main() {
	userinput();
}
