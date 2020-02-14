#include<stdio.h>
union job {
	float salary;
	int workerNo;
} j;

int main() {
	j.salary=12.3;
	j.workerNo=100;

	printf("Sqalary =%1f\n",j.salary);
	printf("Number of workers=%d",j.workerNo);
	return 0;
}
