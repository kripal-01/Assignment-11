//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
	int a;
	printf("enter no.");
	scanf("%d",&a);
   int s=prime(a);
   printf("%d",s);
   return 0;
	
}
int prime(int n)
{ int i,flag=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		flag=1;
	}
	if(flag==1)
	return 0;
	else 
	return 1;
	
}
