//array passing as a argument in a function.....
#include<stdio.h>
void main() {
	int a[5],i;
	printf("Enter the elmnts of array");
	for(i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}
	print(a,5);
}
void print(int array[5] ) {
	int i,sum=0;
	printf("element of the array:");
	for(i=0; i<5; i++) {
		printf("%d",array[i]);
		sum+=array[i];
	}
	printf("sum of array is %d",sum);
}
