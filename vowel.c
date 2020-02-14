#include<stdio.h>
void main() {
	char sub[10]="Thinam";
	int i;

	for(i=0; i<10; i++) {

		if(sub[i]=='a' || sub[i]=='e' || sub[i]=='i' || sub[i]=='o' || sub[i]=='u') {
			printf("%c\n",sub[i]);
		}
	}
}


