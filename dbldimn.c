#include<stdio.h>
int arr(int a[5][5],int c[4][4],int i){
	int j;
	int sum=0;
	printf("Element of the array:");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		
		printf("%d",arr[i][j]);
		sum+=arr[i][j];
	}
	}
	printf("sum of array %d",sum);
}
void main(){
	int a[5][5],c[4][4],i,k;
	printf("Enter the elements of array");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		
		scanf("%d",&a[i][j]);
	}
		}
	arr(a,5);
	arr(c,4);
}
