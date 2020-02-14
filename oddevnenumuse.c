#include<stdio.h>
enum boolean {
    true ,false
};
enum boolean Isevenorodd (int x) {
	if(x%2==0) {
		return true;
	} else {
		return false;
	}
}

void main() {
	int oddevn;
	enum boolean result;
	printf("Enter the numbers");
	scanf("%d",&oddevn);
	result=Isevenorodd(oddevn);
	if(result){
		printf("odd");
	}else{
		printf("even");
	}

}


