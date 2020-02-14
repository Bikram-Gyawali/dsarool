#include<stdio.h>
void main() 
{
	int n,l;
printf("Enter word");
scanf("%c",&n);
	int l;
	l=strlen(n);
	printf("the lngth of string is %d",l);
int i;
	for(i=0; i<l; i++) 
	{

		if(sub[i]=='a' || sub[i]=='e' || sub[i]=='i' || sub[i]=='o' || sub[i]=='u')
		{
			printf("the vowels letters in theis word is %c",sub[i]);
		}
	}
}


