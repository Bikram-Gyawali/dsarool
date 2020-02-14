#include<stdio.h>
typedef struct book{
	char name[20];
	float price;
	int page;
	int isbn;
	
}book;
main(){
	book b1;
	printf("enter detail about book");
	printf("enter book name");
	scanf("%s",b1.name);
	printf("enrt=ter price");
	scanf("%f",&b1.price);
	printf("Enter the page");
	scanf("%d",&b1.page);
	
	printf("so the book name is %s ",b1.name);
}

