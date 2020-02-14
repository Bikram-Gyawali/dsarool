#include<stdio.h>
union  book {
	char name[32];
	float salary;
	int workerno;
} kamdar;

struct structjob {
	char name[32];
	float salary;
	int workerno;
} sjob;

int main() {
	printf("size of unioon=%d bytes",sizeof(kamdar));
	printf("\nsize of structre=%d bytes",sizeof(sjob));
}
