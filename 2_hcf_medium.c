//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d %d",&a,&b);
	int s=hcf(a,b);
	printf("%d",s);
	return 0;
}
int hcf(int m,int n)
{
	int i;
	int c=m<=n?m:n;
	for(i=m;i>=2;i--)
	{
		if(n%i==0&&m%i==0)
		break;
		
	}
	return i;
}
