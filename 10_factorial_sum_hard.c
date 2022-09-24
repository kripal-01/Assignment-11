//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
//function.

#include<stdio.h>
int fact(int n)
{ int f=1,i;
	for(i=n;i>=2;i--)
	f*=i;
	return f;
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
	sum+=fact(i)/i	;
	}
	 return sum;;
}
int main()
{
    int s= sum(5);
    printf("%d",s);
	return 0;
}


