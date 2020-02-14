#include<stdio.h>
#include<string.h>
struct book {
	char name[20];
	float price;
	int isbn;

};
 void main() {
	struct book b1,b2,b3;
	b1=input();
	display(b1);
}
display(struct book b3) {
	printf("Book name %s\n book price:%f\n book isbn%d\n",b3.name,b3.price,b3.isbn);
}
struct book input() {
	struct book b2;
	printf("enter the book nmname");
	scanf("%s",b2.name);
	printf("enter the price");
	scanf("%f",&b2.price);
	printf("enter isbn num");
	scanf("%d",&b2.isbn);
	return(b2);
};
