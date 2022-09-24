//9. Write a program in C to find the square of any number using the function
#include<stdio.h>
int main()
{
	int no;
	printf("enter no.");
	scanf("%d",&no);
	int s=square(no);
	printf("square is  %d",s);
	return 0;
}
int square(int n)
{
	return n*n;
}
