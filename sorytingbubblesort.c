//sorting numbers//technoques of sorting total 11 sorting technique we read bubble and selection sorting technique..
#include<stdio.h>
void main() {
	int a[5]= {1,5,3,4,2};
	int j,i,temp;
	for(i=0; i<5; i++) {
		for(j=0; j<(4-i);j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0; i<5; i++) {
		printf("%d",a[i]);
	}
}
