 //Call by Value Example - Swapping 2 numbers using Call by Value
#include <stdio.h>
 
 
void swap(int i, int j);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("After swapping \na = %d\  b\n is %d",a,b);
}
